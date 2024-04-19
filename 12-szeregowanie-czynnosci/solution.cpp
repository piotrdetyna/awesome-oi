#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<pair<long double, int>> actions;
    for (int i = 0; i < n; i++) {
        float a, b;
        cin >> a >> b;

        long double ratio;
        // jesli a jest rowne 0, oznacza to, ze czas wykonania czynnosci
        // nie jest zalezne od czasu, w ktorym ja wykonamy, wiec ustawiamy
        // ratio na duza liczbe aby czynnosc byla wykonana na koncu
        if (a != 0)
            ratio = b / a;
        else
            ratio = 2000000000;

        actions.push_back({ratio, i});
    }

    sort(actions.begin(), actions.end(), [](const pair<long double, int> &x, const pair<long double, int> &y) {
        return x.first < y.first;
    });

    for (int i = 0; i < actions.size(); i++) 
        cout << actions[i].second + 1 << '\n';
    
    return 0;
}