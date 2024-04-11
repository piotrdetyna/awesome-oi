from collections import defaultdict, deque

def bfs(graph, start):
    queue = deque([(start[0], start[1], 1, 1)]) 
    visited = set((start))
    
    while queue:
        agent1, agent2, steps, turn = queue.popleft()
        
        if agent1 == agent2:
            return steps 
        
        if turn == 1:
            for new_agent1_position in graph[agent1]:
                state = (new_agent1_position, agent2)
                if state not in visited:
                    visited.add(state)
                    queue.append((new_agent1_position, agent2, steps + 1, 2))
        else:
            for new_agent2_position in graph[agent2]:
                state = (agent1, new_agent2_position)
                if state not in visited:
                    visited.add(state)
                    queue.append((agent1, new_agent2_position, steps + 1, 1))

    
    return 

n, m = map(int, input().split())
agent1, agent2 = map(int, input().split())

graph = defaultdict(list)
for _ in range(m):
    a, b = map(int, input().split())
    graph[a].append(b)

res = bfs(graph, (agent1, agent2))
print(res // 2)
