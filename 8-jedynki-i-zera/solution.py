from collections import deque

def bfs(n):
    queue = deque()
    queue.append((1, 1%n))
    visited_mods = set([1%n])
    while queue:
        num, mod = queue.popleft()
        if mod == 0:
            return num
        
        for digit_to_add in [0, 1]:
            new_num = num*10 + digit_to_add
            new_mod = new_num % n
            if new_mod not in visited_mods:
                visited_mods.add(new_mod)
                queue.append((new_num, new_mod))
    return None

tests = int(input())
for _ in range(tests):
    n = int(input())
    print(bfs(n))