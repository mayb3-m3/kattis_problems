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

vector<vector<int>> frends;
vector<int> money;
vector<int> stat;

void dsf(int node, int& net){
    if(stat[node] == -1)
        net += money[node];
    stat[node] = 1;
    for(int i : frends[node]){
        if(stat[i] == -1)
            dsf(i, net);
    }
}
void solve(){
    int n, m; cin >> n >> m;
    frends.assign(n, vector<int>());
    stat.assign(n, -1);
    money.assign(n, 0);
    for(int i = 0; i < n; i++)
        cin >> money[i];
    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        frends[a].push_back(b);
        frends[b].push_back(a);
    }
    bool is_valid = true;
    for(int i = 0; i < n; i++){
        int net = 0;
        if(stat[i] == -1){
            dsf(i, net);
            if(net != 0){
                is_valid = false;
                break;
            }
        }
    }
    if(is_valid)
        cout << "POSSIBLE\n";
    else
        cout << "IMPOSSIBLE\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
