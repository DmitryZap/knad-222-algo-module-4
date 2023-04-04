// Ссылка на задачу: https://informatics.msk.ru/mod/statements/view.php?id=359&chapterid=111539#1

std::vector<std::vector<int>> ReverseAdjacencyList(std::vector<std::vector<int>>& adjacency_list) {
    std::vector<std::vector<int>> reversed_adjacency_list(adjacency_list.size());
    for (auto from = 0; from < adjacency_list.size(); ++from) {
        for (auto to : adjacency_list[from]) {
            reversed_adjacency_list[to].push_back(from);
        }
    }
    return reversed_adjacency_list;
}