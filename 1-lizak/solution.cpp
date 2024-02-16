#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> get_lollipop_values(string lollipop_str);
pair<int, int> get_longest_lollipop(vector<int>& lollipop, bool even_price);
int sum_lollipop_values(vector<int>& lollipop, int start, int end);
void update_answers(vector<int>& lollipop, int l, int r);

unordered_map<char, int> SEGMENTS_VALUES = {
    {'W', 1},
    {'T', 2}
};

unordered_map<int, pair<int, int>> answers_for_prices;

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cout.tie(0);
    int segments, tests;
    cin >> segments >> tests;

    string lollipop_str;
    cin >> lollipop_str;

    vector<int> lollipop = get_lollipop_values(lollipop_str);

    pair<int, int> even = get_longest_lollipop(lollipop, true);
    if (even.first != -1) {
        update_answers(lollipop, even.first, even.second);
    }

    pair<int, int> odd = get_longest_lollipop(lollipop, false);
    if (odd.first != -1) {
        update_answers(lollipop, odd.first, odd.second);
    }  
    
    for (int i=0; i<tests; i++) {
        int price;
        cin >> price;

        if (answers_for_prices.find(price) != answers_for_prices.end()) {
            pair<int, int> answer = answers_for_prices[price];
            cout << answer.first+1 << ' ' << answer.second+1 << '\n';
        }
        else {
            cout << "NIE" << '\n';
        }
    }

    return 0;
}

void update_answers(vector<int>& lollipop, int l, int r) {
    int values_sum = sum_lollipop_values(lollipop, l, r);
    answers_for_prices[values_sum] = make_pair(l, r);
    while (l < r) {
        if (lollipop[l] == 2) {
            l += 1;
        } 

        else if (lollipop[r] == 2) {
            r -= 1;
        }

        else {
            l += 1;
            r -= 1;
        }

        values_sum -= 2;

        answers_for_prices[values_sum] = make_pair(l, r);
    }
}

vector<int> get_lollipop_values(string lollipop_str) {
    
    vector<int> lollipop;
    lollipop.reserve(lollipop_str.length());
    for (int i=0; i<lollipop_str.length(); i++) {
        int segment_value = SEGMENTS_VALUES[lollipop_str[i]];
        lollipop.push_back(segment_value);
    }

    return lollipop;
} 


pair<int, int> get_longest_lollipop(vector<int>& lollipop, bool even_price) {
    pair<int, int> edges(0, lollipop.size() - 1);

    int max_sum = sum_lollipop_values(lollipop, 0, lollipop.size() - 1);
    bool is_sum_even = (max_sum % 2 == 0);

    if (is_sum_even == even_price) {
        return edges;
    }

    int l = 0, r = lollipop.size() - 1;
    while (l < r) {
        if (lollipop[r] == 1) {
            edges.second = r - 1;
            break;
        }
        if (lollipop[l] == 1) {
            edges.first = l + 1;
            break;
        }
        l += 1;
        r -= 1;
    }

    if (l >= r && lollipop[l] != 1) {
        return {-1, -1};
    }

    return edges;
}


int sum_lollipop_values(vector<int>& lollipop, int start, int end) {
    int max_sum = 0;
    for (int i=start; i<=end; i++) {
        max_sum += lollipop[i];
    }

    return max_sum;
}
