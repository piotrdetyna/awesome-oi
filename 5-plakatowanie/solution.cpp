#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cout.tie(0);

    int n, _;
    cin >> n;
    vector<int> buildings(n);
    for (int i = 0; i < n; i++) {
        cin >> _ >> buildings[i];
    }

    vector<int> posters;
    int res = 0;
    for (int i=0; i<n; i++) {
        // Usuwamy wszystkie plakaty wyższe niż obecnie rozpatrywany budynek
        while (!posters.empty() && posters.back() > buildings[i]) {
            posters.pop_back();
        }

        // jeśli nie ma żadnych plakatów lub akutalny plakat jest niższy niż obecny budynek, dodajemy nowy plakat
        if (posters.empty() || posters.back() < buildings[i]) {
            posters.push_back(buildings[i]);
            res++;
        }
    }
    cout << res << "\n";
    return 0;
}