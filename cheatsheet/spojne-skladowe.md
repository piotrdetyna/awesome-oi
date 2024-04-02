# Spójne składowe

<img src="https://piotr.detyna.pl/oi/spojne-skladowe/spojne-skladowe-schemat.png" width="50%">

_Źródło ilustracji: <a href="https://eduinf.waw.pl/inf/alg/001_search/0129.php">https://eduinf.waw.pl/inf/alg/001_search/0129.php</a>_

Spójna składowa w kontekście teorii grafów odnosi się do podzbioru wierzchołków grafu wraz z krawędziami, które je łączą, tak że **między każdą parą wierzchołków istnieje ścieżka**. 

Jeśli graf jest sam w sobie spójny, ma tylko jedną spójną składową, czyli siebie samego. Jeśli graf nie jest spójny, można go podzielić na kilka mniejszych, niezależnych spójnych składowych.

### Spójne składowe a silnie spójne składowe
| Cecha                   | Spójne Składowe                             | Silne Spójne Składowe                      |
|-------------------------|---------------------------------------------|-------------------------------------------|
| **Typ grafu**           | Nieskierowany                               | Skierowany                                |
| **Definicja**           | W spójnej składowej, każdy wierzchołek jest osiągalny z każdego innego wierzchołka tej składowej za pomocą ścieżki. | W silnie spójnej składowej, dla każdej pary wierzchołków `A i B`, istnieje ścieżka skierowana od `A do B` oraz od `B do A`. |



### Zadania olimpijskie
Spójne składowe przydatne są w poniższych zadaniach
- Równanie na słowach
- Prostokąty
- Cło
- Gildie
- Świąteczny łańcuch
- Zawody sportowe 

### Przydatne materiały:
- https://eduinf.waw.pl/inf/alg/001_search/0129.php
- https://www.geeksforgeeks.org/connected-component-definition-meaning-in-dsa/
- https://www.baeldung.com/cs/graph-connected-components


## Znajdowanie spójnych składowych w grafie

1. Inicjalizacja:
   - **Utwórz pusty zbiór `visited`**: Służy do śledzenia odwiedzonych wierzchołków.
   - **Utwórz pustą listę `components`**: Przechowuje spójne składowe.

2. Definicja funkcji DFS (`dfs`):
   - Funkcja przyjmuje wierzchołek `v` jako argument.
   - **Dodaj `v` do `visited` i do bieżącej spójnej składowej (`component`)**.
   - **Dla każdego sąsiada `neighbor` wierzchołka `v`**:
     - Jeśli `neighbor` nie był odwiedzony, rekurencyjnie wywołaj `dfs(neighbor)`.

3. Przetwarzanie każdego wierzchołka:
   - **Iteruj przez wszystkie wierzchołki `v` grafu**.
   - **Jeśli `v` nie został odwiedzony**:
     - Utwórz nową listę `component`.
     - Wywołaj `dfs(v)`, co dodaje `v` i wszystkie połączone z nim wierzchołki do `component`.
     - **Dodaj `component` do `components`**.

4. Zakończenie:
   - **Zwróć `components`**: Zawiera spójne składowe jako listy wierzchołków.

Algorytm efektywnie identyfikuje i grupuje wierzchołki grafu w spójne składowe, wykorzystując przeszukiwanie w głąb do eksploracji i rozszerzania każdej składowej.


### Implementacja w Python
```
def find_connected_components(graph):

    visited = set()
    components = []

    def dfs(v):
        visited.add(v)
        component.append(v)
        for neighbor in graph[v]:
            if neighbor not in visited:
                dfs(neighbor)

    for v in graph:
        if v not in visited:
            component = []
            dfs(v)
            components.append(component)

    return components
```

### Implementacja w C++
```
// Funkcja rekurencyjna do przeszukiwania grafu w głąb (DFS).
// Służy do odwiedzenia wszystkich węzłów w danej spójnej składowej.
void dfs(const string &node, 
         unordered_map<string, vector<string>> &graph, 
         unordered_set<string> &visited, 
         vector<string> &component)
{
    visited.insert(node); // Oznacz węzeł jako odwiedzony
    component.push_back(node); // Dodaj węzeł do bieżącej spójnej składowej

    // Iteruj po wszystkich sąsiadach bieżącego węzła
    for (auto &neighbor : graph[node])
    {
        // Jeśli sąsiad nie został jeszcze odwiedzony, wykonaj na nim DFS
        if (visited.find(neighbor) == visited.end())
        {
            dfs(neighbor, graph, visited, component);
        }
    }
}

// Funkcja znajdująca wszystkie spójne składowe w grafie.
vector<vector<string>> find_connected_components(unordered_map<string, vector<string>> &graph)
{
    unordered_set<string> visited; // Zbiór odwiedzonych węzłów
    vector<vector<string>> components; // Wektor przechowujący spójne składowe

    // Iteruj po wszystkich węzłach grafu
    for (auto &kv : graph)
    {
        // Jeśli węzeł nie został jeszcze odwiedzony, znajdź spójną składową zaczynając od tego węzła
        if (visited.find(kv.first) == visited.end())
        {
            vector<string> component; // Wektor przechowujący bieżącą spójną składową
            dfs(kv.first, graph, visited, component); // Wykonaj DFS, by odwiedzić całą składową
            components.push_back(component); // Dodaj składową do wektora wynikowego
        }
    }

    return components; // Zwróć wektor spójnych składowych
}


```


