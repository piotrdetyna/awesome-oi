#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int get_previous_possible_lecture(vector<pair<int, int>>& lectures, int max_lecture_end) {
    int l = 0, r = lectures.size()-1;
    int lecture_index = -1;

    while (l <= r) {
        int mid = (l + r) / 2;
        if (lectures[mid].second <= max_lecture_end) {
            lecture_index = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    return lecture_index;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    vector<pair<int, int>> lectures;
    for (int i=0; i<n; i++) {
        int begin, end;
        cin >> begin >> end;

        lectures.push_back({begin, end});
    }
    lectures.push_back({0, 0});

    sort(lectures.begin(), lectures.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
        return a.second < b.second;
    });

    vector<int> times(n+1, 0);
    for (int i=1; i<lectures.size(); i++) {
        pair<int, int> lecture = lectures[i];
        int last_best_time = times[i-1];

        int previous_possible_lecture = get_previous_possible_lecture(lectures, lecture.first);
        int new_time = times[previous_possible_lecture] + lecture.second - lecture.first;

        times[i] = max(last_best_time, new_time);
    }

    cout << *max_element(times.begin(), times.end()) << '\n';


    return 0;
}