# Zadanie minusy

Źródło: <a href="https://szkopul.edu.pl/problemset/problem/POAyCWzUB990_g4_MA4GF9Jw/site/?key=statement">Szkopuł</a>

## Wyniki

### Wersja C++
| Zadanie             | Data zgłoszenia      | Status                   | Wynik |
|---------------------|----------------------|--------------------------|-------|
| Minusy (min4_main) | 2024-04-10 20:07:42 | Wstępne sprawdzanie: OK | 100   |


| Test | Wynik | Czas        | Wynik   |
|------|-------|-------------|---------|
| 1    | OK    | 0.00s / 1.00s | 8 / 8   |
| 2    | OK    | 0.00s / 1.00s | 8 / 8   |
| 3    | OK    | 0.00s / 1.00s | 8 / 8   |
| 4    | OK    | 0.00s / 1.00s | 8 / 8   |
| 5    | OK    | 0.01s / 1.00s | 8 / 8   |
| 6    | OK    | 0.09s / 1.00s | 8 / 8   |
| 7    | OK    | 0.07s / 1.00s | 8 / 8   |
| 8    | OK    | 0.01s / 1.00s | 8 / 8   |
| 9    | OK    | 0.00s / 1.00s | 9 / 9   |
| 10   | OK    | 0.00s / 1.00s | 9 / 9   |
| 11   | OK    | 0.01s / 1.00s | 9 / 9   |
| 12   | OK    | 0.08s / 1.00s | 9 / 9   |



### Wersja Python
| Zadanie             | Data zgłoszenia      | Status                   | Wynik |
|---------------------|----------------------|--------------------------|-------|
| Minusy (min4_main) | 2024-04-10 19:47:44 | Wstępne sprawdzanie: OK | 75    |



| Test | Wynik                    | Czas           | Wynik   |
|------|--------------------------|----------------|---------|
| 1    | OK                       | 0.02s / 1.00s  | 8 / 8   |
| 2    | OK                       | 0.02s / 1.00s  | 8 / 8   |
| 3    | OK                       | 0.02s / 1.00s  | 8 / 8   |
| 4    | OK                       | 0.06s / 1.00s  | 8 / 8   |
| 5    | OK                       | 0.46s / 1.00s  | 8 / 8   |
| 6    | Przekroczenie limitu czasu | -.--s / 1.00s | 0 / 8   |
| 7    | Przekroczenie limitu czasu | -.--s / 1.00s | 0 / 8   |
| 8    | OK                       | 0.40s / 1.00s  | 8 / 8   |
| 9    | OK                       | 0.02s / 1.00s  | 9 / 9   |
| 10   | OK                       | 0.06s / 1.00s  | 9 / 9   |
| 11   | OK                       | 0.42s / 1.00s  | 9 / 9   |
| 12   | Przekroczenie limitu czasu | -.--s / 1.00s | 0 / 9   |




#### Limit pamięci: 256 MB

Działanie odejmowania nie jest łączne, np. `(5−2)−1 = 2`, natomiast `5−(2−1) = 4`, a zatem `(5−2)−16 = 5−(2−1)`. Wynika stąd, że wartość wyrażenia postaci `5−2−1` zależy od kolejności wykonywania odejmowań. Przy braku nawiasów przyjmuje się, że wykonujemy działania od lewej strony, czyli wyrażenie `5−2−1` oznacza `(5 − 2) − `1`.

**Mamy dane wyrażenie postaci x<sub>1</sub> ± x<sub>2</sub> ± . . . ± x<sub>n</sub>**, 
gdzie ± oznacza + (plus) lub − (minus), a x<sub>1</sub>, x<sub>2</sub>, . . . , x<sub>n</sub> oznaczają (parami) różne zmienne. 

**Chcemy w wyrażeniu postaci x<sub>1</sub> − x<sub>2</sub> − . . . − x<sub>n</sub>** 
tak rozmieścić nawiasy, aby uzyskać wyrażenie równoważne danemu.
Dla przykładu chcąc uzyskać wyrażenie równoważne wyrażeniu **x<sub>1</sub> − x<sub>2</sub> − x<sub>3</sub> + x<sub>4</sub> + x<sub>5</sub> − x<sub>6</sub> + x<sub>7</sub>** możemy w **x<sub>1</sub> − x<sub>2</sub> − x<sub>3</sub> − x<sub>4</sub> − x<sub>5</sub> − x<sub>6</sub> − x<sub>7</sub>** rozmieścić nawiasy na przykład tak **((x<sub>1</sub> − x<sub>2</sub>) − (x<sub>3</sub> − x<sub>4</sub> − x<sub>5</sub>)) − (x<sub>6</sub> − x<sub>7</sub>)**

__Uwaga: Nawiasowania, w których nawiasy nie otaczają żadnej zmiennej lub otaczają tylko jedną zmienną, są niedopuszczalne.__

## Zadanie
Napisz program, który:
- wczyta opis danego wyrażenia postaci x<sub>1</sub> ± x<sub>2</sub> ± . . . ± x<sub>n</sub>,
- wyznaczy, w jaki sposób można powstawiać nawiasy do wyrażenia **x<sub>1</sub> - x<sub>2</sub> - . . . - x<sub>n</sub>**, tak aby uzyskać wyrażenie równoważne danemu; można powstawiać co najwyżej `n − 1` par nawiasów,
- opisze ten sposób na wyjściu.

## Wejście
W pierwszym wierszu standardowego wejścia zapisana jest jedna liczba całkowita `n, 2 ≤ n ≤ 1 000 000`. Jest to liczba zmiennych w danym wyrażeniu. W każdym z kolejnych `n − 1` wierszy jest zapisany jeden znak, + lub −. W i-tym wierszu zapisany jest znak występujący w danym wyrażeniu między x<sub>i-1</sub> i x<sub>i</sub>.

## Wyjście
Twój program powinien zapisać w pierwszym wierszu na standardowe wyjście szukany sposób wstawienia nawiasów do wyrażenia **x<sub>1</sub> -x<sub>2</sub> - . . . - x<sub>n</sub>**. Należy zapisać tylko nawiasy i minusy (bez odstępów między nimi), pomijając zmienne **x<sub>1</sub>, x<sub>2</sub>, . . . , x<sub>n</sub>**. Możesz założyć, że dla danych testowych zawsze istnieje rozwiązanie. Jeśli istnieje wiele możliwych rozwiązań, Twój program powinien zapisać jedno z nich.

## Przykład
Dla danych wejściowych:
```
7
-
-
+
+
-
+
```

poprawnym wynikiem jest:
```
((-)-(--))-(-)
```

_Autorzy zadania: Piotr Chrząstowski, Wojciech Guzicki_