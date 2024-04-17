from collections import defaultdict, deque

def bfs(graph, a1, a2):
    queue_after_agent2_move = deque([(a1, a2)])

    visited_after_agent1_move = set()
    visited_after_agent2_move = set([(a1, a2)])

    days = 0
    while queue_after_agent2_move:
        queue_after_agent1_move = deque()

        #ruch agenta1
        while queue_after_agent2_move:
            agent1, agent2 = queue_after_agent2_move.popleft()
            if agent1 == agent2:
                return days
            
            # przechodzimy po sasiednich miastach agenta1
            # dodajemy nowe stany po przemieszczeniu sie agenta1
            for new_agent1 in graph[agent1]:
                state = (new_agent1, agent2)
                if not state in visited_after_agent1_move:
                    visited_after_agent1_move.add(state)
                    queue_after_agent1_move.append(state)
        
        # ruch agenta2
        while queue_after_agent1_move:
            agent1, agent2 = queue_after_agent1_move.popleft()

            # przechodzimy po sasiednich miastach agenta2
            # dodajemy nowe stany po przemieszczeniu sie agenta2
            for new_agent2 in graph[agent2]:
                state = (agent1, new_agent2)
                if not state in visited_after_agent2_move:
                    visited_after_agent2_move.add(state)
                    queue_after_agent2_move.append(state)

        days += 1
    return 'NIE'

n, m = map(int, input().split())
agent1, agent2 = map(int, input().split())

graph = defaultdict(list)
for _ in range(m):
    a, b = map(int, input().split())
    graph[a].append(b)

res = bfs(graph, agent1, agent2)
print(res)

