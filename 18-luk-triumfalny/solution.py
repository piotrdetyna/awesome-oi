from collections import defaultdict

n = int(input())
graph = defaultdict(list)

for i in range(n-1):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

def dfs(v, k, parent):
    res = 0
    for neighbor in graph[v]:
        if neighbor != parent:
            res += dfs(neighbor, k, v) + 1
    return max(0, res - k)

def binary_search():
    l, r = 1, len(graph)
    while l <= r:
        mid = (l + r) // 2
        if dfs(1, mid-1, 0) > 0 and dfs(1, mid, 0) == 0:
            return mid
        elif dfs(1, mid, 0) > 0:
            l = mid + 1
        else:
            r = mid - 1
    return 0

print(binary_search())
