// Ссылка на задачу: https://informatics.msk.ru/mod/statements/view.php?id=359&chapterid=466#1

#include <iostream>
#include <vector>

using namespace std;

vector <pair<int, int>> toList(vector <vector<int>> v) {
    vector <pair<int, int>> result;

    for (int i = 0; i < v.size(); ++i) {
        for (int j = 0; j < v.size(); ++j) {
            if (v[i][j] == 1) {
                result.emplace_back(i, j);
            }
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    vector <vector<int>> vec(n, vector<int>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> vec[i][j];
        }
    }

    auto list = toList(vec);

    for (auto &i: list) {
        cout << i.first + 1 << " " << i.second + 1 << endl;
    }

    return 0;
}