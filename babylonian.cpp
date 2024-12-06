#include <bits/stdc++.h>
#define ll long long
#define imax INT_MAX
using namespace std;

void solve() {
    ll t; cin >> t;
    while(t--){
        string str; cin >> str;
        str += ",";
        vector<ll> vtr;
        string s;
        for(char ch : str){
            if(ch == ','){
                if(s.empty())
                    vtr.push_back(0);
                else
                    vtr.push_back(stoi(s));
                s.clear();
            }else
                s += ch;
        }
        reverse(vtr.begin(), vtr.end());
        ll ans = 0, mul = 1;
        for(ll i : vtr){
            ans += (i*mul);
            mul *= 60;
        }
        cout << ans << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
