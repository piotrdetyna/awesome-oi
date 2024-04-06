# BFS - przeszukiwanie grafu wszerz

<img src="https://piotr.detyna.pl/oi/bfs/bfs.gif" >

_Źródło animacji: <a href="https://pl.wikipedia.org/wiki/Przeszukiwanie_wszerz">https://pl.wikipedia.org/wiki/Przeszukiwanie_wszerz</a>_

Przeszukiwanie wszerz (**Breadth-First Search, BFS**) to jeden z podstawowych algorytmów przeszukiwania grafu, który odwiedza wierzchołki w grafie poziom po poziomie od punktu startowego. BFS rozpoczyna pracę od wierzchołka źródłowego (startowego), **odwiedzając wszystkich jego sąsiadów, zanim przejdzie do ich sąsiadów i tak dalej**, aż odwiedzi wszystkie osiągalne wierzchołki. 

**Algorytm używa kolejki do śledzenia wierzchołków** do odwiedzenia, co zapewnia, że wierzchołki są przetwarzane w kolejności ich odkrycia. Dzięki temu podejściu, BFS jest szczególnie przydatny w znajdowaniu najkrótszej ścieżki w grafach nieważonych.


### Zadania olimpijskie
Algorytm BFS przydatny jest w poniższych zadaniach
- Jedynki i zera
- Mokra robota
- Alibaba
- Gonitwa
- Po-łamana
- Teleporty

### Przydatne materiały:
- https://pl.khanacademy.org/computing/computer-science/algorithms/breadth-first-search/a/breadth-first-search-and-its-uses
- https://www.algorytm.edu.pl/grafy/bfs.html
- https://www.geeksforgeeks.org/breadth-first-search-or-bfs-for-a-graph/


## Algorytm BFS

# Algorytm Przeszukiwania Wszerz (BFS)

Algorytm przeszukiwania wszerz (BFS, z ang. Breadth-First Search) jest podstawowym algorytmem przeszukiwania grafu, który przeszukuje graf poziom po poziomie od wierzchołka startowego.

## Kroki Algorytmu

#### 1. Inicjalizacja

- **Utwórz pusty zbiór `visited`**: Zbiór ten będzie przechowywać odwiedzone już wierzchołki, aby uniknąć ich ponownego przetwarzania.
- **Utwórz kolejkę `queue` z wierzchołkiem startowym**: Kolejka ta służy do przechowywania wierzchołków, które mają być odwiedzone, zaczynając od wierzchołka startowego.

#### 2. Przetwarzanie kolejki

Dopóki kolejka nie jest pusta, wykonuj poniższe kroki:

1. **Pobierz pierwszy element z kolejki**: Usuń i zwróć pierwszy element z kolejki, który będzie aktualnie przetwarzanym wierzchołkiem.
2. **Sprawdź, czy wierzchołek nie został odwiedzony**:
   - Jeśli wierzchołek nie został jeszcze odwiedzony, dodaj go do zbioru `visited`.
3. **Pobierz sąsiadów wierzchołka**:
   - Dla aktualnie przetwarzanego wierzchołka, pobierz listę jego sąsiadów. Sąsiadami są te wierzchołki, do których można się dostać bezpośrednio z aktualnego wierzchołka.
4. **Dodaj nieodwiedzonych sąsiadów do kolejki**:
   - Dla każdego sąsiada aktualnego wierzchołka, jeśli nie został on jeszcze odwiedzony, dodaj go na koniec kolejki.

#### 3. Zakończenie

- Algorytm kończy działanie, gdy kolejka jest pusta, co oznacza, że wszystkie dostępne z danego wierzchołka startowego wierzchołki zostały odwiedzone.
- Zwróć zbiór `visited`, zawierający wszystkie odwiedzone wierzchołki.

## Zastosowanie

Algorytm BFS jest wykorzystywany do różnych zadań związanych z grafami, takich jak:

- Wyszukiwanie najkrótszej ścieżki w grafie nieważonym.
- Przeszukiwanie poziomów w drzewie.
- Rozwiązywanie łamigłówek (np. labirynty).



### Implementacja w Python
```
from collections import deque

def bfs(graph, start):
    visited = set()  # Set przechowujący odwiedzone wierzchołki
    queue = deque([start])  # Kolejka do przechowywania wierzchołków do odwiedzenia

    while queue:
        vertex = queue.popleft()  # Pobierz pierwszy element z kolejki
        if vertex not in visited:
            visited.add(vertex)  # Dodaj wierzchołek do listy odwiedzonych
            neighbours = graph.get(vertex, [])  # Pobierz sąsiadów wierzchołka
            
            for neighbour in neighbours:
                if neighbour not in visited:
                    queue.append(neighbour)  # Dodaj sąsiadów do kolejki

    return visited
```

### Implementacja w C++
```
using Graph = unordered_map<int, vector<int>>;

unordered_set<int> bfs(const Graph& graph, int start) {
    unordered_set<int> visited;  // Zbiór odwiedzonych wierzchołków
    queue<int> queue;            // Kolejka wierzchołków do odwiedzenia

    queue.push(start); // Dodaj wierzchołek startowy do kolejki

    while (!queue.empty()) {
        int vertex = queue.front(); // Pobierz pierwszy element z kolejki
        queue.pop();                // Usuń pobrany element z kolejki

        if (visited.find(vertex) == visited.end()) { // Sprawdź, czy wierzchołek nie był odwiedzony
            visited.insert(vertex); // Dodaj wierzchołek do odwiedzonych

            // Przejście po sąsiadach wierzchołka
            const auto& neighbours = graph.at(vertex); // Użyj at, by rzucić wyjątek w przypadku braku klucza
            for (int neighbour : neighbours) {
                if (visited.find(neighbour) == visited.end()) {
                    queue.push(neighbour); // Dodaj nieodwiedzonego sąsiada do kolejki
                }
            }
        }
    }

    return visited; // Zwróć zbiór odwiedzonych wierzchołków
}

```


