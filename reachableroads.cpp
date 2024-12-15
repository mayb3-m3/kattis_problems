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
vector<int> endpoint;

void dsf(int node){
    endpoint[node] = 1;
    for(int i : vtr[node])
        if(endpoint[i] == -1)
            dsf(i);
}
void solve(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        vtr.assign(n, vector<int>());
        endpoint.assign(n, -1);
        for(int i = 0; i < m; i++){
            int a, b; cin >> a >> b;
            vtr[a].push_back(b);
            vtr[b].push_back(a);
        }
        int count = 0;
        for(int i = 0; i < n; i++){
            if(endpoint[i] == -1){
                count++;
                dsf(i);
            }
        }
        cout << count-1 << endl;
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
