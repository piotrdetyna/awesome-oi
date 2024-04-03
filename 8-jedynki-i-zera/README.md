# Zadanie Jedynki i zera (jed)


Źródło: <a href="https://szkopul.edu.pl/problemset/problem/rUp0jP53SVTkXkSewiZQvKI6/site/?key=statement">Szkopuł</a>

## Wyniki

TODO

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