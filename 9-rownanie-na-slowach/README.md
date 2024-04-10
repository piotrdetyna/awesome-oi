# Zadanie Równanie na słowach (row)


Źródło: <a href="https://szkopul.edu.pl/problemset/problem/A7ZI0Wwn6tTiCJoYblblTAqz/site/?key=statement">Szkopuł</a>

## Wyniki

### Wersja C++
| Zadanie                           | Data zgłoszenia        | Status                     | Wynik |
|-----------------------------------|------------------------|----------------------------|-------|
| Zadanie Równanie na słowach (row1_main) | 2024-04-01 22:17:38 | Wstępne sprawdzanie: OK    | 82    |



| Test | Wynik         | Czas        | Wynik   |
|------|---------------|-------------|---------|
| 1    | OK            | 0.00s / 0.10s | 9 / 9   |
| 2    | OK            | 0.00s / 0.10s | 9 / 9   |
| 3    | OK            | 0.00s / 0.10s | 9 / 9   |
| 4    | OK            | 0.00s / 0.10s | 9 / 9   |
| 5    | Zła odpowiedź | 0.04s / 1.50s | 0 / 9   |
| 6    | OK            | 0.01s / 0.10s | 9 / 9   |
| 7    | OK            | 0.02s / 0.10s | 9 / 9   |
| 8    | Zła odpowiedź | 0.01s / 0.10s | 0 / 9   |
| 9    | OK            | 0.03s / 0.10s | 9 / 9   |
| 10   | OK            | 0.03s / 0.10s | 9 / 9   |
| 11   | OK            | 0.00s / 0.10s | 10 / 10 |





### Wersja Python
| Zadanie                           | Data zgłoszenia        | Status                     | Wynik |
|-----------------------------------|------------------------|----------------------------|-------|
| Zadanie Równanie na słowach (row1_main) | 2024-04-01 16:06:43 | Wstępne sprawdzanie: OK    | 100   |



| Test | Wynik | Czas         | Wynik   |
|------|-------|--------------|---------|
| 1    | OK    | 0.03s / 0.10s | 9 / 9   |
| 2    | OK    | 0.03s / 0.10s | 9 / 9   |
| 3    | OK    | 0.03s / 0.10s | 9 / 9   |
| 4    | OK    | 0.03s / 0.10s | 9 / 9   |
| 5    | OK    | 0.09s / 1.50s | 9 / 9   |
| 6    | OK    | 0.07s / 0.10s | 9 / 9   |
| 7    | OK    | 0.07s / 0.10s | 9 / 9   |
| 8    | OK    | 0.06s / 0.10s | 9 / 9   |
| 9    | OK    | 0.08s / 0.10s | 9 / 9   |
| 10   | OK    | 0.07s / 0.10s | 9 / 9   |
| 11   | OK    | 0.03s / 0.10s | 10 / 10 |

#### Limit pamięci: 32 MB

Słowem dwójkowym nazywamy każdy niepusty ciąg złożony z 0 lub 1. Równanie na słowach ma postać x<sub>1</sub> x<sub>2</sub>...x<sub>i</sub> = y<sub>1</sub> y<sub>2</sub>...y<sub>i</sub> gdzie x<sub>i</sub> i y<sub>i</sub> są cyframi dwójkowymi `(0 lub 1)` lub zmiennymi, to jest małymi literami alfabetu angielskiego. Dla każdej zmiennej jest ustalona długość słów dwójkowych, które można podstawiać w jej miejsce. 

Długość tę nazywamy długością zmiennej. Rozwiązanie równania na słowach polega na przypisaniu każdej zmiennej słowa dwójkowego o odpowiadającej tej zmiennej długości, w taki sposób, by po zastąpieniu zmiennych w równaniu przez przypisane im słowa, obie strony równania (słowa dwójkowe) były takie same.

**Dla danego równania na słowach policz ile jest różnych rozwiązań tego równania.**

## Przykład

Niech `4, 2, 4, 4, 2` będą długościami zmiennych `a, b, c, d, e` w poniższym równaniu: `1bad1 = acbe`. To równanie ma `16` różnych rozwiązań.

## Zadanie

Napisz program, który:
- wczytuje ze standardowego wejścia liczbę równań i ich opisy;
- znajduje liczbę rozwiązań każdego równania;
- zapisuje wyniki na standardowe wyjście.

### Wejście

W pierwszym wierszu standardowego wejścia znajduje się liczba całkowita `x, 1 <= x <= 5`. Jest to liczba równań. Następne wiersze zawierają opisy `x` równań. Na każdy opis składa się `6` wierszy. Między kolejnymi opisami nie ma pustych wierszy. Każde równanie jest opisane w następujący sposób:

- W pierwszym wierszu opisu znajduje się liczba całkowita `k, 0 <= k <= 26`. Jest to liczba różnych zmiennych w równaniu. Przyjmujemy, że zawsze zmiennymi są `k` pierwszych małych liter alfabetu angielskiego. 
- W drugim wierszu jest zapisany ciąg `k` liczb całkowitych dodatnich oddzielonych pojedynczymi odstępami. Te liczby to długości `k` kolejnych zmiennych `a, b, ...` występujących w równaniu.
  
- Trzeci wiersz opisu zawiera tylko jedną dodatnią liczbę całkowitą `l`. Jest to długość lewej strony równania — tj. długość słowa utworzonego z cyfr 0 lub 1 i jednoliterowych zmiennych.
- W następnym wierszu jest zapisana lewa strona równania jako ciąg `l` cyfr lub zmiennych bez odstępów między nimi.
- Następne dwa wiersze zawierają opis prawej strony równania. Pierwszy z tych wierszy zawiera dodatnią liczbę `r`. Jest to długość prawej strony równania. Drugi z wierszy zawiera prawą stronę równania zapisaną w taki sam sposób jak jego lewa strona. Liczba cyfr plus suma długości wszystkich zmiennych (licząc wszystkie wystąpienia każdej zmiennej) po każdej stronie równania nie przekracza `10 000`.

### Wyjście

Dla każdego `i, 1 <= i <= x`, Twój program powinien zapisać w i-tym wierszu standardowego wyjścia liczbę różnych rozwiązań i-tego równania.

#### Przykład

Dla danych wejściowych:
```
1
5
4 2 4 4 2
5
1bad1
4
acbe
```

poprawną odpowiedzią jest:
```
16
```

_Autor zadania: Wojciech Rytter._