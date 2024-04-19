# Zadanie Szeregowanie czynności


Źródło: <a href="https://szkopul.edu.pl/problemset/problem/E0BY-XMtZxZOgcAcQL1_eIab/site/?key=statement">Szkopuł</a>

## Wyniki

### Wersja C++
| Zadanie                                   | Data zgłoszenia         | Status                      | Wynik |
|-------------------------------------------|-------------------------|-----------------------------|-------|
| Zadanie Szeregowanie czynności (sze1_main) | 2024-04-19 19:41:37    | Wstępne sprawdzanie: OK     | 100   |


| Test | Wynik | Czas        | Wynik      |
|------|-------|-------------|------------|
| 1    | OK    | 0.00s / 0.10s | 14 / 14  |
| 2    | OK    | 0.00s / 0.10s | 14 / 14  |
| 3    | OK    | 0.00s / 0.10s | 14 / 14  |
| 4    | OK    | 0.00s / 0.10s | 14 / 14  |
| 5    | OK    | 0.01s / 0.10s | 14 / 14  |
| 6    | OK    | 0.02s / 0.10s | 15 / 15  |
| 7    | OK    | 0.03s / 0.10s | 15 / 15  |


### Wersja Python

| Zadanie                                   | Data zgłoszenia         | Status                     | Wynik |
|-------------------------------------------|-------------------------|----------------------------|-------|
| Zadanie Szeregowanie czynności (sze1_main) | 2024-04-19 19:18:11    | Wstępne sprawdzanie: OK    | 85    |




| Test | Wynik                    | Czas          | Wynik      |
|------|--------------------------|---------------|------------|
| 1    | OK                       | 0.02s / 0.10s | 14 / 14    |
| 2    | OK                       | 0.02s / 0.10s | 14 / 14    |
| 3    | OK                       | 0.02s / 0.10s | 14 / 14    |
| 4    | OK                       | 0.03s / 0.10s | 14 / 14    |
| 5    | OK                       | 0.04s / 0.10s | 14 / 14    |
| 6    | OK                       | 0.07s / 0.10s | 15 / 15    |
| 7    | Przekroczenie limitu czasu | -.--s / 0.10s | 0 / 15    |




#### Limit pamięci: 32 MB

Danych jest `n` **niezależnych i niepodzielnych czynności**, ponumerowanych od 1 do n. Należy je wykonać sekwencyjnie w dowolnej kolejności. Wykonanie każdej czynności trwa tym dłużej im później ją rozpoczniemy - ściśle czas wykonania czynności `i` wynosi h<sub>i</sub>(t) = a<sub>i</sub>t + b<sub>i</sub>, jeśli rozpoczniemy ją w chwili `t`. Zakładamy, że 0 ≤ a<sub>i</sub> ≤ 1, 0 ≤ b<sub>i</sub> ≤ 1.

**Należy uszeregować czynności w takiej kolejności, aby łączny czas ich wykonania był najmniejszy.**

## Zadanie
Napisz program, który:

- wczytuje ze standardowego wejścia liczbę czynności `n` nie większą niż `10 000` oraz kolejno dla każdej czynności `i` - współczynniki a<sub>i</sub> oraz b<sub>i</sub> określające zależność czasu wykonania tej czynności od chwili jej rozpoczęcia,
- znajduje takie uszeregowanie czynności, żeby łączny czas ich wykonania był minimalny i zapisuje na standardowym wyjściu numery czynności w takiej kolejności, w jakiej należy je wykonywać.

## Wejście

W pierwszym wierszu standardowego wejścia jest zapisana jedna liczba całkowita dodatnia nie większa niż `10 000`. Jest to liczba czynności `n`.

W każdym z `n` kolejnych wierszy jest zapisana para liczb rzeczywistych nieujemnych w standardowej notacji z kropką i sześcioma cyframi po kropce. Są one oddzielone pojedynczym odstępem. Jest to para współczynników a<sub>i</sub> oraz b<sub>i</sub> określających zależność czasu wykonania odpowiedniej `i`-tej czynności od chwili jej rozpoczęcia.


## Wyjście
Na standardowym wyjściu należy zapisać uszeregowanie czynności, to znaczy odpowiednią permutację liczb `1, ..., n`; każdą liczbę w osobnym wierszu.

## Przykład
Dla danych wejściowych:
```
5
0.002000 0.003000
0.016000 0.001000
0.100000 0.300000
0.016000 0.005000
0.030000 0.060000
```
poprawną odpowiedzią jest:
```
2
4
1
5
3
```


_Autor zadania: Marcin Jurdziński._