# Plakatowanie


Źródło: <a href="https://szkopul.edu.pl/problemset/problem/au-E9FH96-3U9rCKhcNsD5n9/site/?key=statement">Szkopuł</a>

## Wyniki

### Wersja C++
| Zadanie             | Data zgłoszenia        | Status                      | Wynik |
|---------------------|------------------------|-----------------------------|-------|
| Plakatowanie (pla1_main) | 2024-03-03 11:54:29 | Wstępne sprawdzanie: OK | 100   |


| Test | Wynik | Czas            | Wynik  |
|------|-------|-----------------|--------|
| 1a   | OK    | 0.00s / 0.10s   | 10 / 10|
| 1b   | OK    | 0.00s / 0.10s   |        |
| 1c   | OK    | 0.00s / 0.10s   |        |
| 2a   | OK    | 0.00s / 0.10s   | 10 / 10|
| 2b   | OK    | 0.00s / 0.10s   |        |
| 2c   | OK    | 0.00s / 0.10s   |        |
| 3a   | OK    | 0.00s / 0.10s   | 10 / 10|
| 3b   | OK    | 0.00s / 0.10s   |        |
| 3c   | OK    | 0.00s / 0.10s   |        |
| 4a   | OK    | 0.00s / 0.10s   | 10 / 10|
| 4b   | OK    | 0.00s / 0.10s   |        |
| 5a   | OK    | 0.13s / 0.40s   | 10 / 10|
| 5b   | OK    | 0.15s / 0.50s   |        |
| 6a   | OK    | 0.21s / 1.00s   | 10 / 10|
| 6b   | OK    | 0.18s / 1.00s   |        |
| 7a   | OK    | 0.23s / 1.00s   | 10 / 10|
| 7b   | OK    | 0.21s / 1.00s   |        |
| 8a   | OK    | 0.24s / 1.00s   | 10 / 10|
| 8b   | OK    | 0.24s / 1.00s   |        |
| 9a   | OK    | 0.23s / 1.00s   | 10 / 10|
| 9b   | OK    | 0.21s / 1.00s   |        |
| 10a  | OK    | 0.25s / 1.00s   | 10 / 10|
| 10b  | OK    | 0.25s / 1.00s   |        |



### Wersja Python
| Zadanie             | Data zgłoszenia        | Status                        | Wynik |
|---------------------|------------------------|-------------------------------|-------|
| Plakatowanie (pla1_main) | 2024-03-03 10:45:57 | Wstępne sprawdzanie: błąd | 40    |


| Test | Wynik                     | Czas           | Wynik  |
|------|---------------------------|----------------|--------|
| 1a   | OK                        | 0.02s / 0.10s  | 10 / 10|
| 1b   | OK                        | 0.02s / 0.10s  |        |
| 1c   | OK                        | 0.02s / 0.10s  |        |
| 2a   | OK                        | 0.03s / 0.10s  | 10 / 10|
| 2b   | OK                        | 0.03s / 0.10s  |        |
| 2c   | OK                        | 0.02s / 0.10s  |        |
| 3a   | OK                        | 0.04s / 0.10s  | 10 / 10|
| 3b   | OK                        | 0.04s / 0.10s  |        |
| 3c   | OK                        | 0.03s / 0.10s  |        |
| 4a   | OK                        | 0.05s / 0.10s  | 10 / 10|
| 4b   | OK                        | 0.05s / 0.10s  |        |
| 5a   | Przekroczenie limitu czasu| -.--s / 0.40s  | 0 / 10 |
| 5b   | Przekroczenie limitu czasu| -.--s / 0.50s  |        |
| 6a   | Przekroczenie limitu czasu| -.--s / 1.00s  | 0 / 10 |
| 6b   | Przekroczenie limitu czasu| -.--s / 1.00s  |        |
| 7a   | Przekroczenie limitu czasu| -.--s / 1.00s  | 0 / 10 |
| 7b   | Przekroczenie limitu czasu| -.--s / 1.00s  |        |
| 8a   | Przekroczenie limitu czasu| -.--s / 1.00s  | 0 / 10 |
| 8b   | Przekroczenie limitu czasu| -.--s / 1.00s  |        |
| 9a   | Przekroczenie limitu czasu| -.--s / 1.00s  | 0 / 10 |
| 9b   | Przekroczenie limitu czasu| -.--s / 1.00s  |        |
| 10a  | Przekroczenie limitu czasu| -.--s / 1.00s  | 0 / 10 |
| 10b  | Przekroczenie limitu czasu| -.--s / 1.00s  |        |


#### Limit pamięci: 32 MB

Wszystkie budynki we wschodniej części Bajtogrodu zostały zbudowane zgodnie z zasadami starego bajtobudownictwa: stoją one jeden przy drugim (nie ma między nimi przerw). Razem tworzą bardzo długą ścianę budynków o zróżnicowanej wysokości, ciągnącą się ze wschodu na zachód.

Burmistrz Bajtogrodu, Bajtazar, postanowił że ścianę budynków należy od północnej strony pokryć plakatami. Bajtazar zastanawia się, jaką minimalną liczbą plakatów można pokryć całą północną ścianę budynków. Plakaty mogą mieć kształt prostokątów o bokach pionowych i poziomych. Plakaty nie mogą zachodzić na siebie, natomiast mogą stykać się brzegami. Każdy plakat musi w całości przylegać do ścian pewnych budynków i cała powierzchnia północnych ścian budynków musi być pokryta plakatami.

## Zadanie

Napisz program, który:

- wczyta ze standardowego wejścia opisy budynków,
- wyznaczy minimalną liczbę plakatów, potrzebnych do całkowitego pokrycia ich północnych ścian,
- wypisze wynik na standardowe wyjście.

## Wejście

Pierwszy wiersz wejścia zawiera jedną liczbę całkowitą `n (n <= n <= 250 000)`, oznaczającą liczbę budynków stojących w rzędzie. Kolejne `n` wierszy zawiera po dwie liczby całkowite d<sub>i</sub> i w<sub>i</sub> (1 <= d<sub>i</sub>, w<sub>i</sub> <= 1 000 000 000), oddzielone pojedynczym odstępem i oznaczające długość i wysokość i-tego budynku w rzędzie.

## Wyjście

Pierwszy i jedyny wiersz wyjścia powinien zawierać jedną liczbę całkowitą, minimalną liczbę prostokątnych plakatów, którymi można całkowicie pokryć północne ściany budynków.

## Przykład

Dla danych wejściowych:
```
5
1 2
1 3
2 2
2 5
1 4
```
![Rysunek 1](https://szkopul.edu.pl/problemset/problem/au-E9FH96-3U9rCKhcNsD5n9/site/images/OI15/pla0.gif)

poprawną odpowiedzią jest:
```
4
```

![Rysunek 2](https://szkopul.edu.pl/problemset/problem/au-E9FH96-3U9rCKhcNsD5n9/site/images/OI15/pla1.gif)

Na rysunkach została przedstawiona sama północna ściana rzędu budynków. Drugi z rysunków przedstawia przykładowe pokrycie ściany czterema plakatami.


_Autor zadania: Jakub Radoszewski._