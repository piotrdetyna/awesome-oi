known = []
n = int(input())
stack = list(reversed([input() for _ in range(n*2)]))

res = []
while stack:
    curr_element = stack.pop()
    if curr_element not in known:
        known.append(curr_element)
        continue
    
    known_element = known.pop()
    if known_element != curr_element:
        res.append(len(known) + 1)
        stack.extend([known_element, curr_element])

print(len(res))
print('\n'.join(map(str, res)))
