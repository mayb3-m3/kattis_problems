#include <bits/stdc++.h>
#define imax INT_MAX
#define llmax INT64_MAX
#define ll long long
#define ull unsigned long long
#define _rand(x,y) min(x,y)+rand()%(abs(y-x)+1)
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pss pair<string, string>
#define psi pair<string, int>
#define pis pair<int, string>
#define pie 3.141592653589793238
#define _e 2.718281828459045235

using namespace std;

vector<vector<int>> vtr;
vector<int> domino;

void dsf(int node){
    domino[node] = 1;
    for(int i : vtr[node])
        if(domino[i] == -1)
            dsf(i);
}
void solve(){
    int t; cin >> t;
    while(t--){
        int n, m, l; cin >> n >> m >> l;
        vtr.assign(n, vector<int>());
        domino.assign(n, -1);
        for(int i = 0; i < m; i++){
            int a, b; cin >> a >> b;
            vtr[a-1].push_back(b-1);
        }
        for(int i = 0; i < l; i++){
            int a; cin >> a;
            dsf(a-1);
        }
        int count = 0;
        for(int i : domino)
            if(i != -1)
                count++;
        cout << count << endl;
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
