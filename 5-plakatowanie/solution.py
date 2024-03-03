n = int(input())
buildings = [building for building in [int(input().split()[1]) for _ in range(n)]]

posters, res = [], 0
for i in range(n):
    # Usuwamy wszystkie plakaty wyższe niż obecnie rozpatrywany budynek
    while posters and posters[-1] > buildings[i]:
        posters.pop()

    # jeśli nie ma żadnych plakatów lub akutalny plakat jest niższy niż obecny budynek, dodajemy nowy plakat
    if not posters or posters[-1] < buildings[i]:
        posters.append(buildings[i])
        res += 1
print(res)