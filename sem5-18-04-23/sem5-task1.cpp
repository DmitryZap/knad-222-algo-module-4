// Ссылка на задачу: https://informatics.msk.ru/mod/statements/view.php?id=26332&chapterid=111649#1

#include <iostream>
#include <vector>
#include <queue>

std::vector<size_t> GetMinimalDistances(size_t start_vertex, std::vector<std::vector<size_t>>& adjacency_list) {
  std::vector<size_t> minimal_distances(adjacency_list.size(), 101);
  std::vector<size_t> used(adjacency_list.size(), 0);
  std::queue<size_t> vertices_to_check;
  used[start_vertex] = 1;
  vertices_to_check.push(start_vertex);
  minimal_distances[start_vertex] = 0;
  while (!vertices_to_check.empty()) {
    used[vertices_to_check.front()] = 2;
    size_t vertex_to_check = vertices_to_check.front();
    vertices_to_check.pop();
    for (auto neighbour: adjacency_list[vertex_to_check]) {
      if (used[neighbour] == 0) {
        used[neighbour] = 1;
        vertices_to_check.push(neighbour);
        minimal_distances[neighbour] = minimal_distances[vertex_to_check] + 1;
      }
    }
  }
  return minimal_distances;
}
