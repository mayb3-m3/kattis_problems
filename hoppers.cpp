#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>

using namespace std;

vector<vector<int>> ajl;
vector<int> color;

void dfs(int node, bool& bipartite){
    queue<int> q;
    q.push(node); color[node] = 0;
    while(!q.empty()){
        int u = q.front(); q.pop();
        for(int i : ajl[u]){
            if(color[i] == -1){
                color[i] = (color[u] == 1) ? 0 : 1;
                q.push(i);
            }else if(color[i] == color[u])
                bipartite = false;
        }
    }
}
void solve(){
    int n, m; cin >> n >> m;
    ajl.assign(n, vector<int>());
    color.assign(n, -1);
    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        a--, b--;
        ajl[a].push_back(b);
        ajl[b].push_back(a);
    }

    int cnt = 0;
    bool bipartite = true;
    for(int i = 0; i < n; i++){
        if(color[i] == -1){
            cnt++;
            dfs(i, bipartite);
        }
    }

    if(bipartite)
        cout << cnt << endl;
    else
        cout << cnt-1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
