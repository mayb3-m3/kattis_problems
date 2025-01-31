#include <bits/stdc++.h>
#define pll pair<long long, long long>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>
#define pds pair<double, string>
#define vi vector<int>
#define vvi vector<vi>
#define ll long long

using namespace std;

void solve(){
    while(true){
        ll n, m; cin >> n >> m;
        if(n+m == 0)
            break;
            
        vector<pll> vtr;
        for(int i = 0; i < n; i++){
            ll a, b, c, d;
            cin >> a >> b >> c >> d;
            vtr.push_back({c, c+d});
        }

        for(int i = 0; i < m; i++){
            ll a, b; cin >> a >> b; b += a;
            ll cnt = 0;
            for(auto p : vtr){
                ll c = p.first, d = p.second;
                if(d > a && c < b)
                    cnt++;
            }
            cout << cnt << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
