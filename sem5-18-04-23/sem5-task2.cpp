// Ссылка на задачу: https://informatics.msk.ru/mod/statements/view.php?id=26332&chapterid=160#1

#include <iostream>
#include <vector>
#include <queue>

std::vector<std::vector<std::pair<size_t, size_t>>> GetMinimalPaths(size_t start_vertex, std::vector<std::vector<size_t>>& adjacency_list) {
  std::vector<std::vector<std::pair<size_t, size_t>>> minimal_paths(adjacency_list.size());
  std::vector<size_t> used(adjacency_list.size(), 0);
  std::queue<size_t> vertices_to_check;
  used[start_vertex] = 1;
  vertices_to_check.push(start_vertex);
  minimal_paths[start_vertex].push_back(std::make_pair(start_vertex, start_vertex));
  while (!vertices_to_check.empty()) {
    used[vertices_to_check.front()] = 2;
    size_t vertex_to_check = vertices_to_check.front();
    vertices_to_check.pop();
    for (auto neighbour: adjacency_list[vertex_to_check]) {
      if (used[neighbour] == 0) {
        used[neighbour] = 1;
        vertices_to_check.push(neighbour);
        minimal_paths[neighbour].push_back(std::make_pair(vertex_to_check, neighbour));
      }
    }
  }
  return minimal_paths;
}
