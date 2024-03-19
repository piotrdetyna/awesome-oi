# Zadanie Tetris Attack (tet)


Źródło: <a href="https://szkopul.edu.pl/problemset/problem/noPY-IL0vsAi2TiXF-v2f5Br/site/?key=statement">Szkopuł</a>

## Wyniki

### Wersja C++
| Zadanie                          | Data zgłoszenia       | Status                      | Wynik |
|----------------------------------|-----------------------|-----------------------------|-------|
| Zadanie Tetris Attack (tet4_main) | 2024-03-19 12:59:18 | Wstępne sprawdzanie: OK     | 100   |


| Test | Wynik | Czas            | Punkty    |
|------|-------|-----------------|-----------|
| 1    | OK    | 0.00s / 0.10s   | 6 / 6     |
| 2    | OK    | 0.00s / 0.10s   | 6 / 6     |
| 3    | OK    | 0.00s / 0.10s   | 6 / 6     |
| 4    | OK    | 0.01s / 0.10s   | 6 / 6     |
| 5    | OK    | 0.08s / 0.10s   | 6 / 6     |
| 6    | OK    | 0.39s / 0.50s   | 7 / 7     |
| 7    | OK    | 0.39s / 0.50s   | 7 / 7     |
| 8    | OK    | 0.59s / 1.00s   | 7 / 7     |
| 9    | OK    | 0.59s / 1.00s   | 7 / 7     |
| 10a  | OK    | 0.59s / 1.00s   | 7 / 7     |
| 10b  | OK    | 0.59s / 1.00s   |           |
| 11a  | OK    | 0.54s / 1.00s   | 7 / 7     |
| 11b  | OK    | 0.60s / 1.00s   |           |
| 12   | OK    | 0.40s / 0.50s   | 7 / 7     |
| 13   | OK    | 0.49s / 1.00s   | 7 / 7     |
| 14   | OK    | 0.34s / 0.40s   | 7 / 7     |
| 15a  | OK    | 0.58s / 1.00s   | 7 / 7     |
| 15b  | OK    | 0.05s / 0.10s   |           |




### Wersja Python
| Zadanie                          | Data zgłoszenia       | Status                       | Wynik |
|----------------------------------|-----------------------|------------------------------|-------|
| Zadanie Tetris Attack (tet4_main) | 2024-03-19 11:55:19 | Wstępne sprawdzanie: błąd    | 18    |


| Test | Wynik                         | Czas               | Punkty    |
|------|-------------------------------|--------------------|-----------|
| 1    | OK                            | 0.02s / 0.10s      | 6 / 6     |
| 2    | OK                            | 0.02s / 0.10s      | 6 / 6     |
| 3    | OK                            | 0.05s / 0.10s      | 6 / 6     |
| 4    | Przekroczenie limitu czasu    | -.--s / 0.10s      | 0 / 6     |
| 5    | Przekroczenie limitu czasu    | -.--s / 0.10s      | 0 / 6     |
| 6    | Przekroczenie limitu czasu    | -.--s / 0.50s      | 0 / 7     |
| 7    | Przekroczenie limitu czasu    | -.--s / 0.50s      | 0 / 7     |
| 8    | Przekroczenie limitu czasu    | -.--s / 1.00s      | 0 / 7     |
| 9    | Przekroczenie limitu czasu    | -.--s / 1.00s      | 0 / 7     |
| 10a  | Przekroczenie limitu czasu    | -.--s / 1.00s      | 0 / 7     |
| 10b  | Przekroczenie limitu czasu    | -.--s / 1.00s      |           |
| 11a  | Przekroczenie limitu czasu    | -.--s / 1.00s      | 0 / 7     |
| 11b  | Przekroczenie limitu czasu    | -.--s / 1.00s      |           |
| 12   | Przekroczenie limitu czasu    | -.--s / 0.50s      | 0 / 7     |
| 13   | Przekroczenie limitu czasu    | -.--s / 1.00s      | 0 / 7     |
| 14   | Przekroczenie limitu czasu    | -.--s / 0.40s      | 0 / 7     |
| 15a  | Przekroczenie limitu czasu    | -.--s / 1.00s      | 0 / 7     |
| 15b  | Przekroczenie limitu czasu    | -.--s / 0.10s      |           |


#### Limit pamięci: 32 MB

Ostatnimi czasy w Bajtocji bardzo popularną grą stała się łamigłówka "Tetris attack". Jej uproszczona wersja ma następującą postać: Gracz otrzymuje do dyspozycji stos, na którym umieszczono `2n` elementów (jeden na drugim), oznaczonych `n` różnymi symbolami. Przy tym każdym symbolem są oznaczone dokładnie dwa elementy na stosie. Ruch gracza polega na zamianie dwóch sąsiednich elementów miejscami. Jeśli w wyniku zamiany na stosie sąsiadują ze sobą elementy oznaczone identycznymi symbolami, to w "magiczny" sposób znikają, a elementy znajdujące się powyżej spadają w dół (być może powodując kolejne zniknięcia). Celem gracza jest opróżnienie stosu w jak najmniejszej liczbie ruchów.

## Zadanie
Napisz program który:

- wczyta ze standardowego wejścia opis początkowej zawartości stosu,
- obliczy rozwiązanie wymagające minimalnej liczby ruchów,
- wypisze znalezione rozwiązanie na standardowe wyjście.

## Wejście
W pierwszym wierszu standardowego wejścia znajduje się jedna liczba całkowita `n, 1 <= n <= 50 000`. W kolejnych `2n` wierszach zapisana jest początkowa zawartość stosu. Wiersz `i+1`-wszy zawiera jedną liczbę całkowitą a<sub>i</sub> - symbol elementu znajdującego się na wysokości `i` (1 <= a<sub>i</sub> <= n). Każdy symbol występuje na stosie **dokładnie** 2 razy. Na początku żadne dwa identyczne symbole nie występują obok siebie. Ponadto dane testowe są tak dobrane, że istnieje rozwiązanie zawierające nie więcej niż `1000000` ruchów.

## Wyjście
Na standardowym wyjściu należy wypisać opis rozwiązania, wymagającego minimalnej liczby ruchów. Pierwszy wiersz powinien zawierać jedną liczbę całkowitą `m` - długość najkrótszego rozwiązania. Kolejne `m` wierszy powinno zawierać opis rozwiązania, czyli ciąg `m` liczb całkowitych p<sub>i</sub>, ..., p<sub>m</sub>, po jednej w każdym wierszu. Wartość p<sub>i</sub> oznacza, że w `i`-tym ruchu gracz zdecydował o zamianie elementów, znajdujących się na wysokościach p<sub>i</sub> oraz p<sub>i+1</sub>.

Jeżeli istnieje wiele rozwiązań, to Twój program powinien wypisać dowolne z nich.

## Przykład
Dla danych wejściowych:
```
5
5
2
3
1
4
1
4
3
5
2
```
poprawną odpowiedzią jest:
```
2
5
2
```

![Rysunek 1](https://szkopul.edu.pl/problemset/problem/noPY-IL0vsAi2TiXF-v2f5Br/site/images/OI14/tet1.gif)

natomiast dla danych wejściowych:
```
3
1
2
3
1
2
3
```
poprawnym wynikiem jest:
```
3
3
4
2
```
![Rysunek 2](https://szkopul.edu.pl/problemset/problem/noPY-IL0vsAi2TiXF-v2f5Br/site/images/OI14/tet2.gif)

jak również:
```
3
4
3
2
```
![Rysunek 3](https://szkopul.edu.pl/problemset/problem/noPY-IL0vsAi2TiXF-v2f5Br/site/images/OI14/tet3.gif)
_Autor zadania: Tomasz Waleń._