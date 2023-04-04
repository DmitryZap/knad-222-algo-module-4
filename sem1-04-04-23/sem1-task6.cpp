// Ссылка на задачу: https://informatics.msk.ru/mod/statements/view.php?id=359&chapterid=465#1

#include <iostream>
#include <vector>

std::vector<std::vector<int>> EdgesListToConnectivityMatrix(std::vector<std::pair<size_t, size_t>>& edges_list,
                                                            size_t vertices_amount) {
    std::vector<std::vector<int>> connectivity_matrix(vertices_amount, std::vector<int>(vertices_amount));
    for (auto edge : edges_list) {
        connectivity_matrix[edge.first][edge.second] = 1;
        connectivity_matrix[edge.second][edge.first] = 1;
    }
    return connectivity_matrix;
}

int main() {
    std::vector<std::pair<size_t, size_t>> edges_list;
    size_t vertices_amount, edges_amount;
    std::cin >> vertices_amount >> edges_amount;
    for (auto edge = 0; edge < edges_amount; ++edge) {
        size_t first_edge, second_edge;
        std::cin >> first_edge >> second_edge;
        edges_list.push_back(std::make_pair(first_edge, second_edge));
    }
    auto connectivity_matrix = EdgesListToConnectivityMatrix(edges_list, vertices_amount);
}