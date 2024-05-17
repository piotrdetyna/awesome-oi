# Różnica (roz)

Źródło: <a href="https://szkopul.edu.pl/problemset/problem/ElDZtvfzCl9Sj2lC1sAKG0dU/site/?key=statement">Szkopuł</a>

## Wyniki

### Wersja C++
| Zadanie          | Data zgłoszenia      | Status                    | Wynik |
|------------------|----------------------|---------------------------|-------|
| Różnica (roz2_main) | 2024-04-26 23:24:30 | Wstępne sprawdzanie: OK   | 100   |

| Test | Wynik | Czas         | Wynik   |
|------|-------|--------------|---------|
| 1a   | OK    | 0.00s / 0.10s | 10 / 10 |
| 1b   | OK    | 0.00s / 0.10s |         |
| 1c   | OK    | 0.00s / 0.10s |         |
| 1d   | OK    | 0.00s / 0.10s |         |
| 2a   | OK    | 0.00s / 0.10s | 10 / 10 |
| 2b   | OK    | 0.00s / 0.10s |         |
| 2c   | OK    | 0.00s / 0.10s |         |
| 3a   | OK    | 0.00s / 0.10s | 10 / 10 |
| 3b   | OK    | 0.00s / 0.10s |         |
| 3c   | OK    | 0.00s / 0.10s |         |
| 4a   | OK    | 0.00s / 0.10s | 10 / 10 |
| 4b   | OK    | 0.00s / 0.10s |         |
| 5a   | OK    | 0.01s / 0.10s | 10 / 10 |
| 5b   | OK    | 0.00s / 0.10s |         |
| 6a   | OK    | 0.13s / 0.20s | 10 / 10 |
| 6b   | OK    | 0.00s / 0.10s |         |
| 6c   | OK    | 0.02s / 0.10s |         |
| 7a   | OK    | 1.25s / 2.00s | 10 / 10 |
| 7b   | OK    | 0.00s / 0.10s |         |
| 7c   | OK    | 0.86s / 2.00s |         |
| 8a   | OK    | 1.25s / 2.00s | 10 / 10 |
| 8b   | OK    | 0.97s / 1.50s |         |
| 8c   | OK    | 0.83s / 1.50s |         |
| 9a   | OK    | 1.25s / 2.00s | 10 / 10 |
| 9b   | OK    | 0.81s / 2.00s |         |
| 9c   | OK    | 0.84s / 2.00s |         |
| 10a  | OK    | 1.25s / 2.00s | 10 / 10 |
| 10b  | OK    | 0.79s / 2.00s |         |
| 10c  | OK    | 0.98s / 2.00s |         |





### Wersja Python

| Zadanie          | Data zgłoszenia      | Status                    | Wynik |
|------------------|----------------------|---------------------------|-------|
| Różnica (roz2_main) | 2024-04-26 23:12:10 | Wstępne sprawdzanie: błąd | 30    |


| Test | Wynik                     | Czas          | Wynik   |
|------|---------------------------|---------------|---------|
| 1a   | OK                        | 0.03s / 0.10s | 10 / 10 |
| 1b   | OK                        | 0.04s / 0.10s |         |
| 1c   | OK                        | 0.03s / 0.10s |         |
| 1d   | OK                        | 0.03s / 0.10s |         |
| 2a   | OK                        | 0.03s / 0.10s | 10 / 10 |
| 2b   | OK                        | 0.04s / 0.10s |         |
| 2c   | OK                        | 0.04s / 0.10s |         |
| 3a   | OK                        | 0.03s / 0.10s | 10 / 10 |
| 3b   | OK                        | 0.05s / 0.10s |         |
| 3c   | OK                        | 0.05s / 0.10s |         |
| 4a   | Przekroczenie limitu czasu | -.--s / 0.10s | 0 / 10  |
| 4b   | OK                        | 0.03s / 0.10s |         |
| 5a   | Przekroczenie limitu czasu | -.--s / 0.10s | 0 / 10  |
| 5b   | OK                        | 0.03s / 0.10s |         |
| 6a   | Przekroczenie limitu czasu | -.--s / 0.20s | 0 / 10  |
| 6b   | OK                        | 0.03s / 0.10s |         |
| 6c   | Przekroczenie limitu czasu | -.--s / 0.10s |         |
| 7a   | Przekroczenie limitu czasu | -.--s / 2.00s | 0 / 10  |
| 7b   | OK                        | 0.03s / 0.10s |         |
| 7c   | Przekroczenie limitu czasu | -.--s / 2.00s |         |
| 8a   | Przekroczenie limitu czasu | -.--s / 2.00s | 0 / 10  |
| 8b   | Przekroczenie limitu czasu | -.--s / 1.50s |         |
| 8c   | Przekroczenie limitu czasu | -.--s / 1.50s |         |
| 9a   | Przekroczenie limitu czasu | -.--s / 2.00s | 0 / 10  |
| 9b   | Przekroczenie limitu czasu | -.--s / 2.00s |         |
| 9c   | Przekroczenie limitu czasu | -.--s / 2.00s |         |
| 10a  | Przekroczenie limitu czasu | -.--s / 2.00s | 0 / 10  |
| 10b  | Przekroczenie limitu czasu | -.--s / 2.00s |         |
| 10c  | Przekroczenie limitu czasu | -.--s / 2.00s |         |







#### Limit pamięci: 32 MB

Mamy dane słowo złożone z `n` małych liter alfabetu angielskiego `'a'-'z'`. Chcielibyśmy wybrać pewien niepusty, spójny (tj. jednokawałkowy) fragment tego słowa, w taki sposób, aby różnica pomiędzy liczbą wystąpień najczęściej i najrzadziej występującej w tym fragmencie litery była jak największa. 

Zakładamy przy tym, że najrzadziej występująca litera w wynikowym fragmencie słowa musi mieć w tym fragmencie co najmniej jedno wystąpienie. W szczególności, jeżeli fragment składa się tylko z jednego rodzaju liter, to najczęstsza i najrzadsza litera są w nim takie same.




## Wejście

Pierwszy wiersz standardowego wejścia zawiera jedną liczbę całkowitą `n (1 ≤ n ≤ 1 000 000)`, oznaczającą długość słowa. Drugi wiersz zawiera słowo składające się z `n` małych liter alfabetu angielskiego.




## Wyjście
Pierwszy i jedyny wiersz standardowego wyjścia powinien zawierać jedną liczbę całkowitą, równą **maksymalnej wartości różnicy między liczbą wystąpień najczęściej i najrzadziej występującej litery**, jaką możemy znaleźć w pewnym spójnym fragmencie danego słowa.





## Przykład
Dla danych wejściowych:
```
10
aabbaaabab
```
poprawną odpowiedzią jest:
```
3
```

**Wyjaśnienie do przykładu**: Fragment słowa, dla którego różnica między liczbą liter a i b wynosi 3, to aaaba.




_Autor zadania: Jacek Tomasiewicz._