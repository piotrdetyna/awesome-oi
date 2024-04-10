from string import ascii_lowercase as alphabet
from collections import defaultdict
import sys
sys.setrecursionlimit(10000)

def find_connected_components(graph):

    visited = set()
    components = []

    def dfs(v):
        visited.add(v)
        component.append(v)
        for neighbor in graph[v]:
            if neighbor not in visited:
                dfs(neighbor)

    for v in graph:
        if v not in visited:
            component = []
            dfs(v)
            components.append(component)

    return components


def count_possible_answers(left, right, lengths):
    extended_left, extended_right = extend(left, lengths), extend(right, lengths)
    if len(extended_left) != len(extended_right):
        return 0

    graph = defaultdict(list)
    for l, r in zip(extended_left, extended_right):
        graph[l].append(r)
        graph[r].append(l)

    components = find_connected_components(graph)
    counter = 0
    for component in components:
        is_1_in_component, is_0_in_component = '1' in component, '0' in component
        if is_1_in_component and is_0_in_component: # równanie sprzeczne
            return 0
        if is_1_in_component or is_0_in_component: # każdy znak w spójnej składowej to 0 lub 1
            continue                               # więc nie zwiększa ona ilości rozwiązań
        counter += 1
    return 2**counter


def extend(text, lengths):

    extended = []
    for char in text:
        if char in ['0', '1']:
            extended.append(char)
            continue
        for j in range(lengths[char]):
            extended.append(f'{char}{j}')

    return extended


equations = int(input())
for i in range(equations):
    _, lengths_list = input(), list(map(int, input().split()))
    lengths = {alphabet[i]: lengths_list[i] for i in range(len(lengths_list))}
    _, left = input(), input()
    _, right = input(), input()
    res = count_possible_answers(left, right, lengths)
    print(res)


'''
1
3
2 3 4
4
1ab0
2
bc
'''
'''
1
5
4 2 4 4 2
5
1bad1
4
acbe
'''

'''
2
3
2 3 4
4
1ab0
2
bc
5
4 2 4 4 2
5
1bad1
4
acbe
'''
