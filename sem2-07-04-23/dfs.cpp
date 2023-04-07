// Реализация dfs с семинара

#include <iostream>
#include <vector>

using namespace std;

vector<bool> used;
int cnt = 0;

vector<vector<int>> a;
void dfs(int v) {
    cnt ++;
    used[v] = true;
    for (int u: a[v])
        if (!used[u]) dfs(u);

}
int main(){
    int n, m; cin >> n >> m;
    a.resize(n);
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int b; cin>>b;
            if (b==1){
                a[i].push_back(j);
                a[j].push_back(i);
            }

        }
    }
    used.resize(n);
    dfs(m-1);
    cout << cnt;
}