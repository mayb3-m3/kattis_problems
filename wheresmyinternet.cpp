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
vector<int> house;

void dsf(int node){
    house[node] = 1;
    for(int i : vtr[node])
        if(house[i] == -1)
            dsf(i);
}
void solve(){
    int n, m; cin >> n >> m;
    vtr.assign(n, vector<int>());
    house.assign(n, -1);
    while(m--){
        int a, b; cin >> a >> b;
        vtr[a-1].push_back(b-1);
        vtr[b-1].push_back(a-1);
    }
    dsf(0);
    int count = 0;
    for(int i = 0; i < n; i++)
        if(house[i] == -1)
            cout << i+1 << endl, count++;
    if(count == 0)
        cout << "Connected\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
