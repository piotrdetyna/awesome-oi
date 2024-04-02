#include <iostream>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
using Graph = unordered_map<string, vector<string>>;

const string alphabet = "abcdefghijklmnopqrstuvwxyz";

vector<string> extend(string text, unordered_map<char, int> &lengths)
{
    vector<string> extended;
    for (int i = 0; i < text.size(); i++)
    {
        string c(1, text[i]);
        if (c == "0" || c == "1")
            extended.push_back(c);
        else
        {
            for (int j = 0; j < lengths[text[i]]; j++)
                extended.push_back(c + to_string(j));
        }
    }
    return extended;
}

void dfs(const string &node, unordered_map<string, vector<string>> &graph, unordered_set<string> &visited, vector<string> &component)
{
    visited.insert(node);
    component.push_back(node);
    for (auto &neighbor : graph[node])
    {
        if (visited.find(neighbor) == visited.end())
        {
            dfs(neighbor, graph, visited, component);
        }
    }
}

vector<vector<string>> find_connected_components(unordered_map<string, vector<string>> &graph)
{
    unordered_set<string> visited;
    vector<vector<string>> components;

    for (auto kv : graph)
    {
        if (visited.find(kv.first) == visited.end())
        {
            vector<string> component;
            dfs(kv.first, graph, visited, component);
            components.push_back(component);
        }
    }

    return components;
}

int count_possible_answers(string left, string right, unordered_map<char, int> &lengths)
{
    vector<string> extended_left = extend(left, lengths);
    vector<string> extended_right = extend(right, lengths);
    if (extended_left.size() != extended_right.size())
        return 0;

    Graph graph;
    for (int i = 0; i < extended_left.size(); i++)
    {
        string l = extended_left[i], r = extended_right[i];
        graph[l].push_back(r);
        graph[r].push_back(l);
    }

    vector<vector<string>> components = find_connected_components(graph);

    int counter = 0;
    for (auto component : components)
    {
        bool is_0_in_component = (find(component.begin(), component.end(), "0") != component.end());
        bool is_1_in_component = (find(component.begin(), component.end(), "1") != component.end());
        if (is_0_in_component && is_1_in_component)
            return 0;
        if (is_0_in_component || is_1_in_component)
            continue;
        counter++;
    }

    return pow(2, counter);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int equations;
    cin >> equations;
    for (int i = 0; i < equations; i++)
    {
        int lengths_n;
        cin >> lengths_n;
        unordered_map<char, int> lengths;
        int length;
        for (int i = 0; i < lengths_n; ++i)
        {
            cin >> length;
            char curr_char = alphabet[i];
            lengths[curr_char] = length;
        }
        int left_length, right_length;
        string left, right;
        cin >> left_length >> left;
        cin >> right_length >> right;
        int res = count_possible_answers(left, right, lengths);
        cout << res << '\n';
    }

    return 0;
}