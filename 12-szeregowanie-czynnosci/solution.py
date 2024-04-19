n = int(input())

actions = []
for i in range(n):
    a, b = map(float, input().split())

    # jesli a jest rowne 0, oznacza to, ze czas wykonania czynnosci
    # nie jest zalezne od czasu, w ktorym ja wykonamy, wiec ustawiamy
    # ratio na duza liczbe aby czynnosc byla wykonana na koncu
    ratio = b/a if a != 0 else float('inf')
    actions.append((ratio, i))

for _, i in sorted(actions):
    print(i+1)
