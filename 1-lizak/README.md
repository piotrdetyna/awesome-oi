# Lizak

Źródło: <a href="https://szkopul.edu.pl/problemset/problem/AWhdD7i4V7mupdKWVtpgfGSM/site/?key=statement">Szkopuł</a>

## Wyniki

| Zadanie                   | Data zgłoszenia      | Status                     | Wynik |
|---------------------------|----------------------|----------------------------|-------|
| Zadanie Lizak (liz1_main) | 2024-02-16 20:36:33 | Wstępne sprawdzanie: OK | 82    |


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