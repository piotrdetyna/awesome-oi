#include <iostream>
#include <queue>
#include <unordered_set>
#include <utility>
#include <string>

using namespace std;

string bfs(int n)
{
    queue<pair<string, int>> queue;
    queue.push({"1", 1 % n});
    unordered_set<int> visited_mods;

    while (!queue.empty())
    {
        pair<string, int> temp = queue.front();
        queue.pop();
        string num = temp.first;
        int mod = temp.second;

        if (mod % n == 0)
        {
            return num;
        }

        for (int digit_to_add = 0; digit_to_add <= 1; digit_to_add++)
        {
            string new_num = num + to_string(digit_to_add);
            int new_mod = (mod * 10 + digit_to_add) % n;

            if (visited_mods.find(new_mod) == visited_mods.end())
            {
                visited_mods.insert(new_mod);
                queue.push({new_num, new_mod});
            }
        }
    }
    return "";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tests;
    cin >> tests;
    for (int i = 0; i < tests; i++)
    {
        int n;
        cin >> n;
        string res = bfs(n);
        cout << res << '\n';
    }
    return 0;
}