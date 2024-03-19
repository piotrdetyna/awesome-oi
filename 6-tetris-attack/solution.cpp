#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cout.tie(0);

    unordered_set<int> known_set;
    vector<int> known;
    int n;
    cin >> n;

    vector<int> stack(n * 2);
    for (int i = n * 2 - 1; i >= 0; i--)
    {
        int input;
        cin >> input;
        stack[i] = input;
    }

    vector<int> res;
    while (!stack.empty())
    {
        int curr_element = stack.back();
        stack.pop_back();
        if (known_set.find(curr_element) == known_set.end())
        { 
            known.push_back(curr_element);
            known_set.insert(curr_element);
        }
        else
        {
            int known_element = known.back();
            known.pop_back();
            known_set.erase(known_element);
            
            if (known_element != curr_element)
            {
                res.push_back(known.size() + 1);
                stack.push_back(known_element);
                stack.push_back(curr_element);
            }
        }
    }

    cout << res.size() << '\n';
    for (int element : res)
    {
        cout << element << '\n';
    }

    return 0;
}
