# Zadanie Agenci (age)


Źródło: <a href="https://szkopul.edu.pl/problemset/problem/5ngwR2pw5IQsTAOKQL3qFgjm/site/?key=statement">Szkopuł</a>

## Wyniki

### Wersja C++
| Zadanie                        | Data zgłoszenia      | Status                      | Wynik |
| ------------------------------ | -------------------- | --------------------------- | ----- |
| Zadanie Agenci (age1_main)     | 2024-04-17 18:41:40  | Wstępne sprawdzanie: OK     | 86    |


| Test | Wynik                  | Czas         | Wynik   |
|------|------------------------|--------------|---------|
| 1    | OK                     | 0.00s / 0.10s| 6 / 6   |
| 2    | OK                     | 0.00s / 0.10s| 6 / 6   |
| 3    | OK                     | 0.00s / 0.10s| 6 / 6   |
| 4    | OK                     | 0.02s / 0.10s| 6 / 6   |
| 5    | OK                     | 0.09s / 0.10s| 6 / 6   |
| 6    | OK                     | 0.05s / 0.10s| 7 / 7   |
| 7    | OK                     | 0.03s / 0.10s| 7 / 7   |
| 8    | OK                     | 0.04s / 0.10s| 7 / 7   |
| 9    | OK                     | 0.05s / 0.10s| 7 / 7   |
| 10   | OK                     | 0.04s / 0.10s| 7 / 7   |
| 11   | OK                     | 0.03s / 0.10s| 7 / 7   |
| 12   | OK                     | 0.09s / 0.10s| 7 / 7   |
| 13   | Przekroczenie limitu czasu | -.--s / 0.20s | 0 / 7 |
| 14   | OK                     | 0.02s / 0.10s| 7 / 7   |
| 15   | Przekroczenie limitu czasu | -.--s / 0.20s | 0 / 7 |



### Wersja Python

| Zadanie                   | Data zgłoszenia      | Status                  | Wynik |
|---------------------------|----------------------|-------------------------|-------|
| Zadanie Agenci (age1_main)| 2024-04-17 19:07:12  | Wstępne sprawdzanie: OK | 18    |


| Test | Wynik                        | Czas           | Wynik   |
|------|------------------------------|----------------|---------|
| 1    | OK                           | 0.03s / 0.10s  | 6 / 6   |
| 2    | OK                           | 0.03s / 0.10s  | 6 / 6   |
| 3    | OK                           | 0.06s / 0.10s  | 6 / 6   |
| 4    | Przekroczenie limitu czasu   | -.--s / 0.10s  | 0 / 6   |
| 5    | Przekroczenie limitu czasu   | -.--s / 0.10s  | 0 / 6   |
| 6    | Przekroczenie limitu czasu   | -.--s / 0.10s  | 0 / 7   |
| 7    | Przekroczenie limitu czasu   | -.--s / 0.10s  | 0 / 7   |
| 8    | Przekroczenie limitu czasu   | -.--s / 0.10s  | 0 / 7   |
| 9    | Przekroczenie limitu czasu   | -.--s / 0.10s  | 0 / 7   |
| 10   | Przekroczenie limitu czasu   | -.--s / 0.10s  | 0 / 7   |
| 11   | Przekroczenie limitu czasu   | -.--s / 0.10s  | 0 / 7   |
| 12   | Przekroczenie limitu czasu   | -.--s / 0.10s  | 0 / 7   |
| 13   | Przekroczenie limitu czasu   | -.--s / 0.20s  | 0 / 7   |
| 14   | Przekroczenie limitu czasu   | -.--s / 0.10s  | 0 / 7   |
| 15   | Przekroczenie limitu czasu   | -.--s / 0.20s  | 0 / 7   |



#### Limit pamięci: 32 MB

W związku z ostatnimi wpadkami swoich agentów, Urząd Ochrony Bajtocji postanowił usprawnić działalność.

Największym dotychczasowym problemem było bezpieczne urządzanie spotkań agentów. Twój program ma pomóc w rozwiązaniu tego problemu. Dla podanego opisu sieci dróg Bajtocji oraz początkowej pozycji dwóch agentów powinien stwierdzać czy możliwe jest bezpieczne spotkanie dwóch agentów.

Żeby spotkanie uznać za bezpieczne agenci muszą przestrzegać następujących reguł:

- agenci poruszają się w dzień, natomiast spotkania odbywają się wieczorami,
- każdego dnia agent musi zmienić miejsce pobytu,
- agenci mogą poruszać się jedynie po drogach łączących miasta (niestety dodatkowym utrudnieniem jest fakt, iż w Bajtocji drogi są jednokierunkowe),
- agent nie może jednak poruszać się zbyt szybko (mogło by to wzbudzać niepotrzebne zainteresowanie) - jednego dnia nie może przemieścić się dalej niż do sąsiedniego miasta,
- odległość między dwoma miastami połączonymi drogą jest na tyle mała, że agent wyruszający z pierwszego miasta zawsze dotrze do drugiego miasta przed wieczorem,
- spotkanie uznaje się za odbyte w momencie, gdy dwaj agenci znajdą się tego samego wieczora w tym samym mieście.

## Zadanie
Napisz program, który:

- wczyta ze standardowego wejścia liczbę miast i opis sieci dróg Bajtocji, oraz pozycje początkowe dwóch agentów,
- stwierdzi, czy możliwe jest ich bezpieczne spotkanie, a jeśli tak, to po ilu dniach,
- wypisze wynik na standardowe wyjście.

## Wejście

W pierwszym wierszu standardowego wejścia znajdują się dwie liczby całkowite  `n` i `m`, oddzielone pojedynczym odstępem, gdzie `1 ≤ n ≤ 250`, `0 ≤ m ≤ n * (n-1)`.

W drugim wierszu znajdują się dwie liczby całkowite a<sub>1</sub> i a<sub>2</sub> oddzielone pojedynczym odstępem, 1 ≤ a<sub>1</sub>, a<sub>2</sub> ≤ n oraz a<sub>1</sub> != a<sub>2</sub> oznaczające odpowiednio początkowe pozycje agentów nr 1 i nr 2.

W  następnych wierszach znajdują się pary liczb naturalnych `a` i `b` oddzielone pojedynczymi odstępami, `1 ≤ a, b ≤ n` oraz `a != b`, oznaczające istnienie drogi z miasta `a` do miasta `b`.


## Wyjście
Standardowe wyjście powinno zawierać dokładnie  wiersz zawierający:

- dokładnie jedną dodatnią liczbę całkowitą t, oznaczającą **minimalny czas** (w dniach) potrzebny do zorganizowania bezpiecznego spotkania dwóch agentów - jeżeli do takiego spotkania można doprowadzić,
- słowo **NIE**, gdy nie można doprowadzić do bezpiecznego spotkania.

## Przykład
Dla danych wejściowych:
```
6 7
1 5
1 2
4 5
2 3
3 4
4 1
5 4
5 6
```
poprawną odpowiedzią jest:
```
3
```


_Autor zadania: Tomasz Waleń._