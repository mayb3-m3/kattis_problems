#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>

using namespace std;

vector<vector<int>> ajl;
vector<int> color;

void dfs(int node){
    queue<int> q;
    q.push(node); color[node] = 0;
    while(!q.empty()){
        int u = q.front(); q.pop();
        for(int i : ajl[u]){
            if(color[i] == -1){
                color[i] = (color[u] == 1) ? 0 : 1;
                q.push(i);
            }
        }
    }
}
void solve(){
    int n; cin >> n;
    ajl.assign(n, vector<int>());
    color.assign(n, -1);
    vector<pii> edg;
    for(int i = 0; i < n-1; i++){
        int a, b; cin >> a >> b;
        a--, b--;
        edg.push_back({a, b});
        ajl[a].push_back(b);
        ajl[b].push_back(a);
    }

    for(int i = 0; i < n-1; i++){
        if(color[i] == -1)
            dfs(i);
    }

    for(auto i : edg){
        if(color[i.first]) cout << 1 << endl;
        else cout << 0 << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
