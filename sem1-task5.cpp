// Ссылка на задачу: https://informatics.msk.ru/mod/statements/view.php?id=359&chapterid=464#1

struct A {
    int a;
    int b;
};

std::vector<A> func(std::vector <std::vector<int>> vec) {
    std::vector<A> v;
    for (int i = 0; i < vec.size(); ++i) {
        for (int j = i + 1; j < vec.size(); ++j) {
            if (vec[i][j] == 1) {
                A el;
                el.a = i;
                el.b = j;
                v.push_back(el);
            }
        }
    }
    return v;
}