# Zadanie Rozkład Fibonacciego (roz)



Źródło: <a href="https://szkopul.edu.pl/problemset/problem/w1QbhPufazp-sH6X-u4pTnNu/site/?key=statement">Szkopuł</a>

## Wyniki

### Wersja C++
| Zadanie                              | Data zgłoszenia        | Status                      | Wynik |
|--------------------------------------|------------------------|-----------------------------|-------|
| Zadanie Rozkład Fibonacciego (roz2_main) | 2024-04-25 20:16:34 | Wstępne sprawdzanie: OK | 100   |



| Test | Wynik | Czas        | Wynik  |
|------|-------|-------------|--------|
| 1    | OK    | 0.00s / 0.10s | 12 / 12 |
| 2    | OK    | 0.00s / 0.10s | 12 / 12 |
| 3    | OK    | 0.00s / 0.10s | 12 / 12 |
| 4    | OK    | 0.00s / 0.10s | 12 / 12 |
| 5    | OK    | 0.00s / 0.10s | 13 / 13 |
| 6    | OK    | 0.00s / 0.10s | 13 / 13 |
| 7    | OK    | 0.00s / 0.10s | 13 / 13 |
| 8    | OK    | 0.00s / 0.10s | 13 / 13 |



### Wersja Python

| Zadanie                              | Data zgłoszenia        | Status                      | Wynik |
|--------------------------------------|------------------------|-----------------------------|-------|
| Zadanie Rozkład Fibonacciego (roz2_main) | 2024-04-25 19:19:58 | Wstępne sprawdzanie: OK | 100   |





| Test | Wynik | Czas          | Wynik  |
|------|-------|---------------|--------|
| 1    | OK    | 0.02s / 0.10s | 12 / 12 |
| 2    | OK    | 0.02s / 0.10s | 12 / 12 |
| 3    | OK    | 0.02s / 0.10s | 12 / 12 |
| 4    | OK    | 0.02s / 0.10s | 12 / 12 |
| 5    | OK    | 0.02s / 0.10s | 13 / 13 |
| 6    | OK    | 0.02s / 0.10s | 13 / 13 |
| 7    | OK    | 0.02s / 0.10s | 13 / 13 |
| 8    | OK    | 0.02s / 0.10s | 13 / 13 |





#### Limit pamięci: 64 MB

Ciąg liczb Fibonacciego to ciąg liczb całkowitych zdefiniowany rekurencyjnie w następujący sposób:

```
Fib[0] = 0, Fib[1] = 1, Fib[n] = Fib[n-2] + Fib[n-1] dla n > 1
```

Początkowe elementy tego ciągu to: `0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...`

Bajtazar bada, **jak różne liczby można przedstawić jako sumy lub różnice liczb Fibonacciego**. Aktualnie zastanawia się, jak daną dodatnią liczbę całkowitą  przedstawić jako sumę lub różnicę jak najmniejszej liczby (niekoniecznie różnych) liczb Fibonacciego. Na przykład, liczby `10, 19, 17 i 1070` można przedstawić minimalnie, odpowiednio, za pomocą `2, 2, 3 lub 4 liczb Fibonacciego`:

```
10 = 5 + 5
19 = 21 - 2
17 = 13 + 5 - 1
1070 = 987 + 89 - 5 - 1
```

Pomóż Bajtazarowi! Napisz program, który dla danej dodatniej liczby całkowitej `k` wyznaczy minimalną liczbę liczb Fibonacciego potrzebnych do przedstawienia liczby `k`  jako ich sumy lub różnicy.


## Wejście

W pierwszym wierszu standardowego wejścia znajduje się jedna dodatnia liczba całkowita `p (1 ≤ p ≤ 10)` oznaczająca liczbę zapytań. W kolejnych `p` wierszach będzie znajdowało się po jednej dodatniej liczbie całkowitej `k (1 ≤ k ≤ 4 * 10^17)`.


## Wyjście
Twój program powinien wypisać na standardowe wyjście dla każdego zapytania minimalną liczbę liczb Fibonacciego potrzebnych do przedstawienia liczby `k` jako ich sumy lub różnicy.



## Przykład
Dla danych wejściowych:
```
1
1070
```
poprawną odpowiedzią jest:
```
4
```


_Autor zadania: Karol Pokorski._