// Ссылка на задачу: https://informatics.msk.ru/mod/statements/view.php?id=359&chapterid=462#1

#include <iostream>
#include <vector>

size_t VertexCount(std::vector<std::vector<int>> graph) {
    size_t vertex_counter = 0;
    for (size_t row = 0; row < graph.size(); ++row) {
        for (size_t column = row + 1; column < graph.size(); ++column) {
            vertex_counter += graph[row][column];
        }
    }
    return vertex_counter;
}

int main() {
    std::vector<std::vector<int>> graph;
    size_t n;
    std::cin >> n;
    for (size_t row = 0; row < n; ++row) {
        size_t value;
        std::cin >> value;
        graph[row].push_back(value);
    }
    std::cout << VertexCount(graph);
}