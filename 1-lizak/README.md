# Lizak

Źródło: <a href="https://szkopul.edu.pl/problemset/problem/AWhdD7i4V7mupdKWVtpgfGSM/site/?key=statement">Szkopuł</a>

## Wyniki

| Zadanie                   | Data zgłoszenia      | Status                     | Wynik |
|---------------------------|----------------------|----------------------------|-------|
| Zadanie Lizak (liz1_main) | 2024-02-16 20:36:33 | Wstępne sprawdzanie: OK | 82    |

| Test | Wynik | Czas | Wynik |
|------|-------|------|-------|
| 1a | OK | 0.00s / 0.10s | 8 / 8 |
| 1b | OK | 0.00s / 0.10s | |
| 1c | OK | 0.00s / 0.10s | |
| 2a | OK | 0.00s / 0.10s | 8 / 8 |
| 2b | OK | 0.00s / 0.10s | |
| 2c | OK | 0.00s / 0.10s | |
| 3a | OK | 0.00s / 0.10s | 8 / 8 |
| 3b | OK | 0.00s / 0.10s | |
| 3c | OK | 0.02s / 0.10s | |
| 4a | OK | 0.01s / 0.10s | 8 / 8 |
| 4b | OK | 0.01s / 0.10s | |
| 4c | OK | 0.02s / 0.10s | |
| 5a | OK | 0.03s / 0.10s | 8 / 8 |
| 5b | OK | 0.03s / 0.10s | |
| 5c | OK | 0.12s / 0.20s | |
| 6a | OK | 0.11s / 0.20s | 8 / 8 |
| 6b | OK | 0.46s / 1.00s | |
| 6c | OK | 0.23s / 0.40s | |
| 7a | OK | 0.11s / 0.20s | 8 / 8 |
| 7b | OK | 0.11s / 0.20s | |
| 7c | OK | 0.24s / 0.40s | |
| 8a | OK | 0.39s / 1.00s | 8 / 8 |
| 8b | OK | 0.34s / 1.00s | |
| 8c | OK | 0.49s / 1.00s | |
| 9a | OK | 0.85s / 1.50s | 9 / 9 |
| 9b | OK | 0.81s / 1.50s | |
| 9c | OK | 0.93s / 1.50s | |
| 10a | OK | 0.85s / 1.00s | 9 / 9 |
| 10b | OK | 1.01s / 1.50s | |
| 10c | OK | 1.09s / 1.50s | |
| 11a | Przekroczenie limitu pamięci | 1.69s / 2.50s | 0 / 9 |
| 11b | OK | 1.52s / 2.00s | |
| 11c | OK | 1.39s / 2.00s | |
| 12a | Przekroczenie limitu pamięci | 0.41s / 2.00s | 0 / 9 |
| 12b | OK | 1.65s / 2.50s | |
| 12c | OK | 1.57s / 2.00s | |



## Limit pamięci: 64 MB

Bajtazar prowadzi w Bajtogrodzie sklep ze słodyczami. Wśród okolicznych dzieci najpopularniejszymi słodyczami są lizaki waniliowo-truskawkowe. Składają się one z wielu segmentów jednakowej długości, z których każdy ma jeden smak - waniliowy lub truskawkowy. Cena lizaka jest równa sumie wartości jego segmentów; segment waniliowy kosztuje jednego bajtalara, a truskawkowy dwa bajtalary.

![Rysunek 1](https://szkopul.edu.pl/problemset/problem/AWhdD7i4V7mupdKWVtpgfGSM/site/images/OI18/lizak.jpg) 

*Przykładowy lizak o pięciu segmentach, trzech truskawkowych i dwóch waniliowych, ułożonych na przemian. Cena tego lizaka wynosi  bajtalarów.*


Obecnie Bajtazarowi został na składzie tylko jeden (za to być może bardzo długi) lizak. Sprzedawca zdaje sobie sprawę, że być może nikt nie będzie chciał go kupić w całości, dlatego dopuszcza możliwość łamania go na granicach segmentów w celu uzyskania lizaka o mniejszej długości. Fragment lizaka przeznaczony ostatecznie do sprzedaży musi pozostać niepołamany.

Doświadczenie pokazuje, że klienci najczęściej chcą kupić lizaka za całe swoje kieszonkowe. Bajtazar zastanawia się, dla wielu możliwych wartości, jak przełamać posiadany lizak tak, aby otrzymać lizak o cenie równej dokładnie bajtalarów. Ponieważ zadanie nie jest wcale proste, poprosił Cię o pomoc.

### Wejście

W pierwszym wierszu standardowego wejścia znajdują się dwie liczby całkowite `n` oraz `k` `(1 ≤ n, k ≤ 10^6)` oddzielone pojedynczym odstępem. Oznaczają one odpowiednio liczbę segmentów ostatniego pozostałego w sklepie lizaka oraz liczbę rozpatrywanych wartości `k`. Segmenty lizaka są ponumerowane kolejno od 1 do `n`. W drugim wierszu znajduje się `n`-literowy opis lizaka, złożony z liter `T` i `W`, przy czym `T` oznacza segment truskawkowy, zaś `W` - waniliowy; `n`-ta z tych liter opisuje smak `n`-tego segmentu. W kolejnych `k` wierszach znajdują się kolejne wartości `k` do rozpatrzenia `(1 ≤ k ≤ 10^9)`, po jednej w wierszu.

### Wyjście

Twój program powinien wypisać na standardowe wyjście dokładnie `k` wierszy zawierających wyniki dla kolejnych wartości `k`, po jednym wyniku w wierszu. Jeśli dla danej wartości `k` nie da się wyłamać z lizaka spójnego fragmentu o wartości równej `k` bajtalarów, należy wypisać słowo `NIE`. W przeciwnym przypadku należy wypisać dwie liczby `a` oraz `b` `(1 ≤ a ≤ b ≤ n)` oddzielone pojedynczym odstępem, takie że fragment lizaka złożony z segmentów o numerach od `a` do `b` włącznie ma wartość dokładnie `k` bajtalarów. Jeśli istnieje wiele możliwych odpowiedzi, Twój program może podać dowolną z nich.

#### Przykład

Dla danych wejściowych:

```
5 3
TWTWT
5
1
7
```

poprawną odpowiedzią jest:
```
1 3
2 2
NIE
```

#### Wyjaśnienie do przykładu

Wyjaśnienie do przykładu: Przykład opisuje lizak z rys. 1. Segmenty o numerach od 1 do 3 tworzą lizak postaci TWT, wart 5 bajtalarów. Segment numer 2 ma smak waniliowy i kosztuje 1 bajtalara. Z tego lizaka nie da się w żaden sposób uzyskać lizaka wartego 7 bajtalarów.

_Autor zadania: Jakub Pachocki._