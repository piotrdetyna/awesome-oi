#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;

    int gray_edges;
    cin >> gray_edges;

    int triangles_total = n * (n - 1) * (n - 2);
    triangles_total /= 6;

    vector<int> gray_edges_from_each_vertex(n);
    for (int i = 0; i < gray_edges; i++) {
        int a, b;
        cin >> a >> b;
        gray_edges_from_each_vertex[a - 1] += 1;
        gray_edges_from_each_vertex[b - 1] += 1;
    }

    int multicolor_triangles = 0;
    for (int gray_edges_number : gray_edges_from_each_vertex)
        multicolor_triangles += gray_edges_number * (n - 1 - gray_edges_number);
    multicolor_triangles /= 2;

    int single_color_triangles = triangles_total - multicolor_triangles;
    cout << single_color_triangles;
}