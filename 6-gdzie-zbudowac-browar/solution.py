def get_left_index(index, n):
    return (index - 1) % n

def get_right_index(index, n):
    return (index + 1) % n


n = int(input())
demands = [0] * n
distances = [0] * n
for i in range(n):
    demands[i], distances[i] = map(int, input().split())

# Obliczamy łączne koszty dla każdego miasta jadąc z browaru w lewo
# Gdy browar jest zbudowany w 0-wym mieście
# Pod każdym kolejnym indeksem zapisujemy koszt dostaw do i-tego miasta z browarem w 0-wym mieście
l_costs = [0] * n
l_distance = 0
for i in range(n-1, 0, -1):
    l_distance += distances[i]
    l_costs[i] = l_distance * demands[i]


# Obliczamy łączne koszty dla każdego miasta tym razem jadąc z browaru w prawo
r_costs = [0] * n
r_distance = 0
for i in range(1, n):
    r_distance += distances[i-1]
    r_costs[i] = r_distance * demands[i]


# Korzystając z wcześniej obliczonych kosztów, rozpoatrujemy każde miasto
# i wybieramy kierunek, w którym koszt dostaw z browaru w 0-wym mieście jest mniejszy
# Obliczamy pomocnicze zmienne:
cost = 0                        # Całkowity najbardziej optymalny koszt dostaw 
l_distance, r_distance = 0, 0   # Całkowity dystans do pokonania dla dostaw z lewej i prawej strony
r_demand, l_demand = 0, 0       # Całkowite zapotrzebowanie na piwo z lewej i prawej strony
max_l_city, max_r_city = -1, -1 # Indeksy miast najbardziej oddalonych od browaru w 0-wym mieście
                                    # z lewej i prawej strony

for i in range(1, n):
    if l_costs[i] < r_costs[i]:
        cost += l_costs[i]
        l_distance += distances[i]
        l_demand += demands[i]
        if max_l_city == -1:
            max_l_city = i
    else:
        cost += r_costs[i]
        r_demand += demands[i]
        r_distance += distances[i-1]
        max_r_city = i       


best_cost = cost
# Iterujemy po każdym mieście i korzystając z wcześniej obliczonych kosztów dla browaru w 0-wym mieście
# aktualizujemy koszty dla browaru w każdym innym mieście
for brewery_city in range(1, n):
    distance = distances[brewery_city-1] 

    cost -= r_demand * distance  # Odejmujemy od kosztu dostaw ze starego browaru do aktualnego miasta, bo w aktualnym mieście jest browar
    cost += (l_demand + demands[brewery_city-1]) * distance # Dodajemy koszt dostaw z nowego browaru do miasta, w którym poprzednio był browar
    
    r_demand -= demands[brewery_city]   # Zmniejszamy zapotrzebowanie na piwo z prawej strony o zapotrzebowanie aktualnego miasta, bo w aktualnym mieście jest browar
    l_demand += demands[brewery_city-1] # Zwiększamy zapotrzebowanie na piwo z lewej strony o zapotrzebowanie poprzedniego miasta, bo nie ma już w nim browaru

    r_distance -= distance  # Teraz z prawej strony jest bliżej,
    l_distance += distance  # a z lewej  dalej

    # Zwiększamy ilośc miast, do których dojeżdżamy z prawej strony i a analogicznie zmniejszyć z lewej
    # Tak długo jak przynosi to korzyści
    while True:
        old_cost = cost
        # Do najdalszego miasta, do któreg dojeżdzaliśmy z lewej strony, teraz dojeżdzamy z prawej
        cost += (r_distance + distances[max_r_city]) * demands[max_l_city] 
        cost -= demands[max_l_city] * l_distance

        if cost >= old_cost:
            cost = old_cost
            break

        r_demand += demands[max_l_city]
        l_demand -= demands[max_l_city]

        r_distance += distances[max_r_city]
        l_distance -= distances[max_l_city]

        # Przesuwamy granicę między miastami, do których dojeżdzamy z lewej i prawej strony w prawo
        max_r_city = get_right_index(max_r_city, n)
        max_l_city = get_right_index(max_l_city, n)

    best_cost = min(best_cost, cost)

print(best_cost)



