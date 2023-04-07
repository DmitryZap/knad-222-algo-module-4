// Ссылка на задачу: https://informatics.msk.ru/mod/statements/view.php?id=359&chapterid=466#1

#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    unordered_set<pair<int, int>> vertexes;

    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
//        if (vertexes.find(make_pair(a, b)) == vertexes.end()) {
//            vertexes.emplace(make_pair(a, b));
//        } else {
//            cout << "NO";
//            return 0;
//        }
        vertexes.emplace(make_pair(a, b));
        if (vertexes.size() != i + 1) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}