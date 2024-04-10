# Zadanie Jedynki i zera (jed)


Źródło: <a href="https://szkopul.edu.pl/problemset/problem/rUp0jP53SVTkXkSewiZQvKI6/site/?key=statement">Szkopuł</a>

## Wyniki

### Wersja C++
| Zadanie                     | Data zgłoszenia       | Status                     | Wynik |
|-----------------------------|-----------------------|----------------------------|-------|
| Zadanie Jedynki i zera (jed1_main) | 2024-04-04 18:39:12 | Wstępne sprawdzanie: OK | 100   |

| Test | Wynik | Czas         | Wynik  |
|------|-------|--------------|--------|
| 1    | OK    | 0.00s / 0.10s| 5 / 5  |
| 2    | OK    | 0.00s / 0.10s| 5 / 5  |
| 3    | OK    | 0.00s / 0.10s| 5 / 5  |
| 4    | OK    | 0.00s / 0.10s| 5 / 5  |
| 5    | OK    | 0.00s / 0.10s| 5 / 5  |
| 6    | OK    | 0.01s / 0.10s| 5 / 5  |
| 7    | OK    | 0.00s / 0.10s| 5 / 5  |
| 8    | OK    | 0.00s / 0.10s| 5 / 5  |
| 9    | OK    | 0.00s / 0.10s| 5 / 5  |
| 10   | OK    | 0.00s / 0.10s| 5 / 5  |
| 11   | OK    | 0.01s / 0.10s| 5 / 5  |
| 12   | OK    | 0.02s / 0.10s| 5 / 5  |
| 13   | OK    | 0.02s / 0.10s| 5 / 5  |
| 14   | OK    | 0.03s / 0.10s| 5 / 5  |
| 15   | OK    | 0.02s / 0.10s| 6 / 6  |
| 16   | OK    | 0.02s / 0.10s| 6 / 6  |
| 17   | OK    | 0.03s / 0.10s| 6 / 6  |
| 18   | OK    | 0.03s / 0.10s| 6 / 6  |
| 19   | OK    | 0.03s / 0.10s| 6 / 6  |


### Wersja Python

| Zadanie                     | Data zgłoszenia       | Status                     | Wynik |
|-----------------------------|-----------------------|----------------------------|-------|
| Zadanie Jedynki i zera (jed1_main) | 2024-04-04 18:08:22 | Wstępne sprawdzanie: OK | 100   |

| Test | Wynik | Czas         | Wynik  |
|------|-------|--------------|--------|
| 1    | OK    | 0.02s / 0.10s| 5 / 5  |
| 2    | OK    | 0.02s / 0.10s| 5 / 5  |
| 3    | OK    | 0.02s / 0.10s| 5 / 5  |
| 4    | OK    | 0.02s / 0.10s| 5 / 5  |
| 5    | OK    | 0.02s / 0.10s| 5 / 5  |
| 6    | OK    | 0.03s / 0.10s| 5 / 5  |
| 7    | OK    | 0.02s / 0.10s| 5 / 5  |
| 8    | OK    | 0.03s / 0.10s| 5 / 5  |
| 9    | OK    | 0.02s / 0.10s| 5 / 5  |
| 10   | OK    | 0.02s / 0.10s| 5 / 5  |
| 11   | OK    | 0.04s / 0.10s| 5 / 5  |
| 12   | OK    | 0.06s / 0.10s| 5 / 5  |
| 13   | OK    | 0.06s / 0.10s| 5 / 5  |
| 14   | OK    | 0.07s / 0.10s| 5 / 5  |
| 15   | OK    | 0.05s / 0.10s| 6 / 6  |
| 16   | OK    | 0.05s / 0.10s| 6 / 6  |
| 17   | OK    | 0.07s / 0.10s| 6 / 6  |
| 18   | OK    | 0.07s / 0.10s| 6 / 6  |
| 19   | OK    | 0.07s / 0.10s| 6 / 6  |


#### Limit pamięci: 32 MB

Pewne liczby naturalne mają zapis dziesiętny złożony tylko z jedynek i zer, w którym jest przynajmniej jedna jedynka, na przykład **101**. Jeśli liczba naturalna nie ma tej własności, to można próbować pomnożyć ją przez jakąś liczbę naturalną tak, by iloczyn miał tę własność.

## Zadanie
Napisz program, który dla każdej liczby naturalnej `n` nie większej niż `20 000`, wczytanej ze standardowego wejścia, znajduje jej dodatnią wielokrotność, której zapis dziesiętny składa się z co najwyżej `100` (stu) cyfr, wyłącznie zer lub jedynek i zapisuje tę wielokrotność w standardowym wyjściu, albo stwierdza, że takiej wielokrotności nie ma, wpisując w standardowym wyjściu odpowiedź **BRAK**.

## Wejście

Standardowe wejście zawiera w pierwszym wierszu całkowitą dodatnią liczbę `K < 1000`, a następnie w kolejnych wierszach ciąg `K` liczb z zakresu `[1... 20000]`, każda w osobnym wierszu. Liczby w standardowym wejściu są zapisane poprawnie i Twój program nie musi tego sprawdzać.


## Wyjście
Każdy kolejny wiersz standardowego wyjścia, począwszy od pierwszego, zawiera tylko jeden wyraz `BRAK` albo dokładnie jedną dodatnią wielokrotność kolejnej danej liczby w postaci ciągu cyfr `0` lub `1` bez odstępów pomiędzy cyframi. Rozwiązania są zapisane w standardowym wyjściu w takiej samej kolejności jak odpowiednie liczby w standardowym wejściu.

## Przykład
Dla danych wejściowych:
```
6
17
11011
17
999
125
173
```
poprawną odpowiedzią jest:
```
11101
11011
11101
111111111111111111111111111
1000
1011001101
```


_Autor zadania: Andrzej Walat._