#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;
using Graph = unordered_map<int, vector<int>>;
Graph graph;

int dfs(int v, int k, int parent) {
    int res = 0;
    for (int neighbor : graph[v]) {
        if (neighbor != parent) {
            res += dfs(neighbor, k, v) + 1;
        }
    }
    return max(0, res - k);
}

int binary_search() {
    int l = 1, r = graph.size();
    while (l <= r) {
        int mid = (l + r) / 2;
        if (dfs(1, mid-1, 0) > 0 && dfs(1, mid, 0) == 0) {
            return mid;
        }
        else if (dfs(1, mid, 0) > 0) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    return 0;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    
    int n;
    cin >> n;

    for (int i=0; i<n-1; i++) {
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    cout << binary_search(); 

    return 0;
}