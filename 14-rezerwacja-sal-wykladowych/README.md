# Zadanie Rezerwacja sal wykładowych (rez)




Źródło: <a href="https://szkopul.edu.pl/problemset/problem/ex8U04OQav3BWcaH7wCtK-_b/site/?key=statement">Szkopuł</a>

## Wyniki

### Wersja C++
| Zadanie                                      | Data zgłoszenia      | Status                    | Wynik |
|----------------------------------------------|----------------------|---------------------------|-------|
| Zadanie Rezerwacja sal wykładowych (rez1_main) | 2024-04-26 17:21:18 | Wstępne sprawdzanie: OK   | 100   |




| Test | Wynik | Czas       | Wynik |
|------|-------|------------|-------|
| 1    | OK    | 0.00s / 0.10s | 8 / 8 |
| 2    | OK    | 0.00s / 0.10s | 8 / 8 |
| 3    | OK    | 0.00s / 0.10s | 8 / 8 |
| 4    | OK    | 0.00s / 0.10s | 8 / 8 |
| 5    | OK    | 0.00s / 0.10s | 8 / 8 |
| 6    | OK    | 0.01s / 0.10s | 8 / 8 |
| 7    | OK    | 0.01s / 0.10s | 8 / 8 |
| 8    | OK    | 0.01s / 0.10s | 8 / 8 |
| 9    | OK    | 0.01s / 0.10s | 9 / 9 |
| 10   | OK    | 0.01s / 0.10s | 9 / 9 |
| 11   | OK    | 0.01s / 0.10s | 9 / 9 |
| 12   | OK    | 0.01s / 0.10s | 9 / 9 |




### Wersja Python

| Zadanie                                      | Data zgłoszenia      | Status                    | Wynik |
|----------------------------------------------|----------------------|---------------------------|-------|
| Zadanie Rezerwacja sal wykładowych (rez1_main) | 2024-04-26 17:23:46 | Wstępne sprawdzanie: OK   | 40    |






| Test | Wynik                     | Czas            | Wynik |
|------|---------------------------|-----------------|-------|
| 1    | OK                        | 0.02s / 0.10s   | 8 / 8 |
| 2    | OK                        | 0.02s / 0.10s   | 8 / 8 |
| 3    | OK                        | 0.02s / 0.10s   | 8 / 8 |
| 4    | OK                        | 0.02s / 0.10s   | 8 / 8 |
| 5    | OK                        | 0.02s / 0.10s   | 8 / 8 |
| 6    | Przekroczenie limitu czasu | -.--s / 0.10s | 0 / 8 |
| 7    | Przekroczenie limitu czasu | -.--s / 0.10s | 0 / 8 |
| 8    | Przekroczenie limitu czasu | -.--s / 0.10s | 0 / 8 |
| 9    | Przekroczenie limitu czasu | -.--s / 0.10s | 0 / 9 |
| 10   | Przekroczenie limitu czasu | -.--s / 0.10s | 0 / 9 |
| 11   | Przekroczenie limitu czasu | -.--s / 0.10s | 0 / 9 |
| 12   | Przekroczenie limitu czasu | -.--s / 0.10s | 0 / 9 |






#### Limit pamięci: 32 MB

Rozporządzamy jedną salą wykładową. Wykładowcy, którzy chcą korzystać z sali, składają zamówienia określając czas rozpoczęcia i zakończenia wykładu. Układamy plan wykorzystania sali akceptując pewne wykłady i odrzucając inne, tak aby czas wykorzystania sali był jak najdłuższy. Zakładamy, że w momencie zakończenia jednego wykładu może się rozpocząć następny wykład.


## Zadanie

Napisz program, który:

- wczytuje ze standardowego wejścia zamówienia wykładowców,
- oblicza maksymalny czas wykorzystania sali (przy odpowiednio ułożonym planie wykładów),
- zapisuje wynik na standardowe wyjście.

## Wejście

W pierwszym wierszu standardowego wejścia jest zapisana jedna liczba całkowita dodatnia `n (n ≤ 10 000)`. Jest to liczba zamówień.

W każdym z kolejnych `n` wierszy są zapisane dwie liczby całkowite `p` oraz `k`, oddzielone pojedynczym odstępem, spełniające nierówności `0 ≤ p < k ≤ 30 000`. Jest to zamówienie na salę wykładową w otwartym przedziale czasu od `p` do `k` (wykładowca potrzebuje sali w czasie reprezentowanym na osi czasu przez odcinek otwarty).


## Wyjście
W pierwszym i jedynym wierszu standardowego wyjścia należy zapisać maksymalny czas wykorzystania sali.




## Przykład
Dla danych wejściowych:
```
12
1 2
3 5
0 4
6 8
7 13
4 6
9 10
9 12
11 14
15 19
14 16
18 20
```
poprawną odpowiedzią jest:
```
16
```


_Autor zadania: Wojciech Guzicki._