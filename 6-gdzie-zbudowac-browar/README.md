# Gdzie zbudować browar?


Źródło: <a href="https://szkopul.edu.pl/problemset/problem/Z1C91LB8rGYMxy6wRLBmbXba/site/?key=statement">Szkopuł</a>

## Wyniki

### Wersja C++
| Zadanie                             | Data zgłoszenia      | Status                   | Wynik |
|-------------------------------------|----------------------|--------------------------|-------|
| Zadanie Gdzie zbudować browar? (bro1_main) | 2024-03-01 16:06:50 | Wstępne sprawdzanie: OK  | 83    |

| Test | Wynik          | Czas         | Wynik    |
|------|----------------|--------------|----------|
| 1    | OK             | 0.00s / 0.10s| 8 / 8    |
| 1a   | OK             | 0.00s / 0.10s|          |
| 2    | OK             | 0.00s / 0.10s| 8 / 8    |
| 2a   | OK             | 0.00s / 0.10s|          |
| 3    | OK             | 0.00s / 0.10s| 8 / 8    |
| 3a   | OK             | 0.00s / 0.10s|          |
| 4    | OK             | 0.00s / 0.10s| 8 / 8    |
| 5    | OK             | 0.00s / 0.10s| 8 / 8    |
| 6    | OK             | 0.00s / 0.10s| 8 / 8    |
| 7    | OK             | 0.00s / 0.10s| 8 / 8    |
| 8    | Zła odpowiedź  | 0.00s / 0.10s| 0 / 8    |
| 9    | Zła odpowiedź  | 0.01s / 0.10s| 0 / 9    |
| 10   | OK             | 0.01s / 0.10s| 9 / 9    |
| 11   | OK             | 0.01s / 0.10s| 9 / 9    |
| 11a  | OK             | 0.00s / 0.10s|          |
| 12   | OK             | 0.01s / 0.10s| 9 / 9    |


### Wersja Python
| Zadanie                                 | Data zgłoszenia       | Status                  | Wynik |
|-----------------------------------------|-----------------------|-------------------------|-------|
| Zadanie Gdzie zbudować browar? (bro1_main) | 2024-03-01 13:46:24 | Wstępne sprawdzanie: OK | 56    |

| Test | Wynik                  | Czas        | Wynik  |
|------|------------------------|-------------|--------|
| 1    | OK                     | 0.02s / 0.10s | 8 / 8  |
| 1a   | OK                     | 0.02s / 0.10s |        |
| 2    | OK                     | 0.02s / 0.10s | 8 / 8  |
| 2a   | OK                     | 0.02s / 0.10s |        |
| 3    | OK                     | 0.02s / 0.10s | 8 / 8  |
| 3a   | OK                     | 0.02s / 0.10s |        |
| 4    | OK                     | 0.03s / 0.10s | 8 / 8  |
| 5    | OK                     | 0.04s / 0.10s | 8 / 8  |
| 6    | OK                     | 0.08s / 0.10s | 8 / 8  |
| 7    | OK                     | 0.10s / 0.10s | 8 / 8  |
| 8    | Przekroczenie limitu czasu | -.--s / 0.10s | 0 / 8  |
| 9    | Przekroczenie limitu czasu | -.--s / 0.10s | 0 / 9  |
| 10   | Przekroczenie limitu czasu | -.--s / 0.10s | 0 / 9  |
| 11   | Przekroczenie limitu czasu | -.--s / 0.10s | 0 / 9  |
| 11a  | OK                     | 0.02s / 0.10s |        |
| 12   | Przekroczenie limitu czasu | -.--s / 0.10s | 0 / 9  |


#### Limit pamięci: 32 MB

Mieszkańcy bajtockiej wyspy Abstynencja bardzo lubią piwo bezalkoholowe. Do tej pory piwo bezalkoholowe sprowadzano z Polski, ale w tym roku w jednym z miast na Abstynencji zostanie wybudowany browar. Wszystkie miasta wyspy leżą na wybrzeżu i są połączone autostradą obiegającą wyspę wzdłuż brzegu. Inwestor budujący browar zebrał informacje o zapotrzebowaniu na piwo, tj. ile cystern piwa trzeba codziennie dostarczyć do każdego z miast. Dysponuje także zestawieniem odległości pomiędzy miastami. Koszt transportu jednej cysterny na odległość 1 km wynosi 1 talar. Dzienny koszt transportu to suma, jaką trzeba wyłożyć, by do każdego miasta przetransportować z browaru tyle cystern, ile wynosi zapotrzebowanie w danym mieście. Jego wielkość zależy od miejsca położenia browaru. Inwestor chce zminimalizować koszty transportu piwa.

## Zadanie
Napisz program, który:
- wczyta ze standardowego wejścia liczbę miast, odległości między nimi oraz dzienne zapotrzebowania na piwo,
- obliczy minimalny dzienny koszt transportu piwa,
- wypisze wynik na standardowe wyjście.

## Wejście
W pierwszym wierszu standardowego wejścia jest zapisana jedna liczba całkowita \(n\) równa liczbie miast, \(n\). W każdym z kolejnych \(n\) wierszy zapisana jest para nieujemnych liczb całkowitych oddzielonych pojedynczym odstępem. Liczby \(z\) i \(d\) zapisane w \(i\)-tym wierszu to odpowiednio zapotrzebowanie na piwo w mieście nr \(i\) oraz odległość (w kilometrach) od miasta nr \(i\) do następnego miasta na autostradzie. Kolejne miasta na autostradzie mają kolejne numery, po mieście nr \(n\) leży miasto nr 1. Całkowita długość autostrady nie przekracza 10\^4 km. Zapotrzebowanie na piwo w żadnym mieście nie przekracza 10\^4 cystern.

## Wyjście
Twój program powinien zapisać w pierwszym i jedynym wierszu standardowego wyjścia dokładnie jedną liczbę całkowitą równą minimalnemu dziennemu kosztowi transportu piwa.

## Przykład
Dla danych wejściowych:

```
6
1 2
2 3
1 2
5 2
1 10
2 3
```
poprawną odpowiedzią jest:
```
41
```

_Autor zadania: Wojciech Guzicki._