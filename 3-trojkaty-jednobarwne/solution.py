n = int(input())
gray_edges = int(input())

triangles_total = n * (n-1) * (n-2)
triangles_total //= 6

gray_edges_from_each_vertex = [0 for _ in range(n)]
for _ in range(gray_edges):
    a, b = tuple(map(lambda x: int(x)-1, input().split()))
    gray_edges_from_each_vertex[a] += 1
    gray_edges_from_each_vertex[b] += 1

multicolor_triangles = 0
for gray_edges_number in gray_edges_from_each_vertex:
    multicolor_triangles += gray_edges_number * (n - 1 - gray_edges_number)

multicolor_triangles //= 2
single_color_triangles = triangles_total - multicolor_triangles
print(single_color_triangles)