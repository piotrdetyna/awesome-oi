#include <iostream>
#include <queue>
#include <map>
#include <unordered_set>
#include <utility>
#include <vector>

using namespace std;

struct PairHash {
    template <class T1, class T2>
    size_t operator() (const pair<T1, T2> &v) const {
        auto [a, b] = v;
        // wydajne obliczanie hasha pary intow
        size_t h = (a*a + 3*a + 2*a*b + b + b*b) / 2;
        return h;
    }
};

using Graph = map<int, vector<int>>;
using VisitedSet = unordered_set<pair<int, int>, PairHash>;
using Queue = queue<pair<int, int>>;


bool was_visited(VisitedSet &visited, pair<int, int> state) {
    return visited.find(state) != visited.end();
}

pair<int, int> queue_pop(Queue &queue) {
    pair<int, int> popped_element = queue.front();
    queue.pop();
    return popped_element;
}

int bfs(Graph &graph, int a1, int a2) {
    Queue queue_after_agent2_move;
    queue_after_agent2_move.push({a1, a2});

    unordered_set<pair<int, int>, PairHash> visited_after_agent1_move;
    unordered_set<pair<int, int>, PairHash> visited_after_agent2_move;
    visited_after_agent2_move.insert({a1, a2});

    int days = 0;
    while (!queue_after_agent2_move.empty()) {
        Queue queue_after_agent1_move;

        // ruch agenta1
        while (!queue_after_agent2_move.empty()) {
            auto [agent1, agent2] = queue_pop(queue_after_agent2_move);
            
            if (agent1 == agent2)
                return days;

            // przechodzimy po sasiednich miastach agenta1
            // dodajemy nowe stany po przemieszczeniu sie agenta1
            for (int new_agent1 : graph[agent1]) {
                pair<int, int> state = make_pair(new_agent1, agent2);
                if (!was_visited(visited_after_agent1_move, state)) {
                    visited_after_agent1_move.insert(state);
                    queue_after_agent1_move.push(state);
                }
            }
        }

        // ruch agenta2
        while (!queue_after_agent1_move.empty()) {
            auto [agent1, agent2] = queue_pop(queue_after_agent1_move);

            // przechodzimy po sasiednich miastach agenta2
            // dodajemy nowe stany po przemieszczeniu sie agenta2
            for (int new_agent2 : graph[agent2]) {
                pair<int, int> state = make_pair(agent1, new_agent2);
                if (!was_visited(visited_after_agent2_move, state)) {
                    visited_after_agent2_move.insert(state);
                    queue_after_agent2_move.push(state);
                }
            }
        }      
        days++;
    }

    return -1;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    int agent1, agent2;
    cin >> agent1 >> agent2;

    Graph graph;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
    }

    int days = bfs(graph, agent1, agent2);

    if (days == -1)  
        cout << "NIE";
    else            
        cout << days;
    return 0;
}