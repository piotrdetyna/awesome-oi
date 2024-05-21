#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

const string ALPHABET = "abcdefghijklmnopqrstuvwxyz";

vector<int> merge_and_set_char_values(vector<int> min_char_indexes, vector<int> max_char_indexes) {
    int min_char_i = 0, max_char_i = 0;
    vector<int> merged_list;

    while (min_char_i < min_char_indexes.size() && max_char_i < max_char_indexes.size()) {
        if (min_char_indexes[min_char_i] < max_char_indexes[max_char_i]) {
            merged_list.push_back(-1);
            min_char_i++;
        }
        else {
            merged_list.push_back(1);
            max_char_i++;
        }
    }

    while (min_char_i < min_char_indexes.size()) {
        merged_list.push_back(-1);
        min_char_i++;
    }

    while (max_char_i < max_char_indexes.size()) {
        merged_list.push_back(1);
        max_char_i++;
    }
    
    return merged_list;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    string text;
    cin >> text;

    unordered_map<char, vector<int>> char_indexes;
    for (int i=0; i<n; i++) {
        char_indexes[text[i]].push_back(i);
    }

    int res = 0;
    for (char min_char : ALPHABET) {
        for (char max_char : ALPHABET) {
            if (min_char == max_char) 
                continue;

            vector<int> min_char_indexes = char_indexes[min_char];
            vector<int> max_char_indexes = char_indexes[max_char];

            vector<int> char_values = merge_and_set_char_values(min_char_indexes, max_char_indexes);

            int temp_res = 0;
            int sum_to_current_char = 0;
            int sum_to_current_substring_start = 0;
            int sum_to_best_substring_start = 2000000001;

            for (int char_value : char_values) {
                sum_to_current_char += char_value;

                if (char_value == -1) {
                    sum_to_best_substring_start = min(sum_to_best_substring_start, sum_to_current_substring_start);
                    sum_to_current_substring_start = sum_to_current_char;
                }
                temp_res = max(temp_res, sum_to_current_char - sum_to_best_substring_start);
            }
            res = max(res, temp_res);
        }
    }
    cout << res; 
    return 0;
}
