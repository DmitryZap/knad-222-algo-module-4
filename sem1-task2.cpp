// Ссылка на задачу: https://informatics.msk.ru/mod/statements/view.php?id=359&chapterid=463#1

#include <iostream>
#include <vector>


using namespace std;

bool isHaveLoop(const vector<vector<int>>& arr) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i][i] == 1) {
            return true;
        }
    }

    return false;
}


int main() {
    int n;
    cin >> n;
    vector<vector<int>> vec(n, vector<int>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> vec[i][j];
        }
    }
    if (isHaveLoop(vec)) {
        cout << "YES";
    } else {
        cout << "NO";
    }


    return 0;
}