#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int longest_common_stutter(vector<int>& a, vector<int>& b) {
    int a_len = a.size(), b_len = b.size();

    vector<int> memo(b_len+1, 0);
    vector<vector<int>> lcs(2, vector<int>(b_len + 1));

    unordered_map<int, int> prev_a_index;
    unordered_map<int, int> prev_b_index;

    for (int i=1; i<a_len+1; i++) {
        int curr_a = a[i - 1];
        
        for (int j=1; j<b_len+1; j++) {
            
            int curr_b = b[j - 1];

            if (curr_a == curr_b 
                && prev_a_index[curr_a] > 0 
                && prev_a_index[curr_a] < i 
                && prev_b_index[curr_b] > 0 
                && prev_b_index[curr_b] < j
            ) {
                lcs[i % 2][j] = memo[prev_b_index[curr_b]] + 2;
            }
            lcs[i % 2][j] = max(max(lcs[i % 2][j], lcs[(i-1) % 2][j]), lcs[i % 2][j - 1]);

            prev_b_index[curr_b] = j;
        }
        prev_a_index[curr_a] = i;

        for (int j=1; j<b_len+1; j++) {
            if (a[i-1] == b[j-1]) {
                memo[j] = lcs[(i-1) % 2][j - 1];
            }
        }
    }
    return lcs[a_len % 2][b_len];
}

void filter_elements(vector<int>& v, unordered_map<int, int>& freq) {
    vector<int> filtered;
    for (int num : v) {
        if (freq[num] >= 2) {
            filtered.push_back(num);
        }
    }
    v = filtered;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    unordered_map<int, int> freq_a, freq_b;

    for (int i = 0; i < n; i++) {
        int temp_input;
        cin >> temp_input;
        a[i] = temp_input;
        freq_a[temp_input]++;
    }

    for (int i = 0; i < m; i++) {
        int temp_input;
        cin >> temp_input;
        b[i] = temp_input;
        freq_b[temp_input]++;
    }

    unordered_map<int, int> combined_freq;
    for (const auto& p : freq_a) {
        combined_freq[p.first] = max(combined_freq[p.first], p.second);
    }
    for (const auto& p : freq_b) {
        combined_freq[p.first] = max(combined_freq[p.first], p.second);
    }

    filter_elements(a, combined_freq);
    filter_elements(b, combined_freq);

    cout << longest_common_stutter(a, b);
}
