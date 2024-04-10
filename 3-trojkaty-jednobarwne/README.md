# Zadanie Trójkąty jednobarwne

Źródło: <a href="https://szkopul.edu.pl/problemset/problem/UU2Uj-barjiONnRxd9aEVoDj/site/?key=statement">Szkopuł</a>

## Wyniki

### Wersja C++
| Zadanie | Data zgłoszenia | Status | Wynik |
| ------- | ---------------- | ------ | ----- |
| Zadanie Trójkąty jednobarwne (tro3_main) | 2024-04-10 21:49:14 | Wstępne sprawdzanie: OK | 100 |



| Test | Wynik | Czas | Wynik |
| ---- | ----- | ---- | ----- |
| 1 | OK | 0.00s / 0.10s | 16 / 16 |
| 2 | OK | 0.00s / 0.10s | 16 / 16 |
| 3 | OK | 0.00s / 0.10s | 17 / 17 |
| 4 | OK | 0.00s / 0.10s | 17 / 17 |
| 5 | OK | 0.01s / 0.10s | 17 / 17 |
| 6 | OK | 0.05s / 0.10s | 17 / 17 |




### Wersja Python
| Zadanie | Data zgłoszenia | Status | Wynik |
| ------- | ---------------- | ------ | ----- |
| Zadanie Trójkąty jednobarwne (tro3_main) | 2024-04-10 21:42:53 | Wstępne sprawdzanie: OK | 66 |

| Test | Wynik | Czas | Wynik |
| ---- | ----- | ---- | ----- |
| 1 | OK | 0.02s / 0.10s | 16 / 16 |
| 2 | OK | 0.02s / 0.10s | 16 / 16 |
| 3 | OK | 0.02s / 0.10s | 17 / 17 |
| 4 | OK | 0.03s / 0.10s | 17 / 17 |
| 5 | Przekroczenie limitu czasu | -.--s / 0.10s | 0 / 17 |
| 6 | Przekroczenie limitu czasu | -.--s / 0.10s | 0 / 17 |





#### Limit pamięci: 32 MB


W przestrzeni rozmieszczono `n` punktów w taki sposób, że żadne trzy z nich nie są współliniowe. Następnie każdą parę tych punktów połączono odcinkiem i każdy odcinek pokolorowano na czarno albo na czerwono. Trójkątem jednobarwnym nazwiemy każdy trójkąt mający wszystkie trzy boki tego samego koloru. Mamy daną listę wszystkich czerwonych odcinków. **Chcemy znaleźć liczbę wszystkich trójkątów jednobarwnych.**

## Zadanie
Napisz program, który:

- wczytuje ze standardowego wejścia: liczbę punktów, liczbę odcinków czerwonych oraz ich listę,
- znajduje liczbę trójkątów jednobarwnych,
- zapisuje wynik na standardowe wyjście.

## Wejście
W pierwszym wierszu standardowego wejścia jest zapisana jedna liczba całkowita `n` spełniająca nierówności `3 ≤ n ≤ 1 000`. Jest to liczba punktów. W drugim wierszu jest zapisana jedna liczba całkowita `m` spełniająca nierówności `0 ≤ m ≤ 250 000`. Jest to liczba odcinków czerwonych.

W każdym z kolejnych `m` wierszy są zapisane dwie liczby całkowite `p` oraz `k`, oddzielone pojedynczym odstępem i spełniające nierówność: `1 ≤ p < k ≤ n`. Są to numery wierzchołków będących końcami kolejnego odcinka czerwonego.

## Wyjście
W pierwszym i jedynym wierszu standardowego wyjścia należy zapisać jedną liczbę całkowitą — **liczbę trójkątów jednobarwnych**.

## Przykład
Dla danych wejściowych:
```
6
9
1 2
2 3
2 5
1 4
1 6
3 4
4 5
5 6
3 6
```
poprawną odpowiedzią jest:
```
2
```
_Autor zadania: Wojciech Guzicki._