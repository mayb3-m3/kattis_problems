#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>
#define pdd pair<double, double>
#define vi vector<int>
#define vvi vector<vi>
#define ll long long

using namespace std;

void solve(){
    long double d; cin >> d;
    if(d >= 10){
        cout << "No solution\n";
        return;
    }
    bool found = false;
    set<ll> ans;
    ll nu = round(d*10000), de = 10000;
    ll g = __gcd(nu, de);
    nu /= g, de /= g;
    for(ll fnt = 1; fnt <= 9; fnt++){ //front digit
        for(ll mul = 1; mul <= 10000000; mul *= 10){ //multiplier
            ll up = fnt*(nu*mul - de);
            ll down = 10*de - nu;
            if(up % down == 0){
                ll bck = up / down;
                if(bck / mul == 0)
                    ans.insert(fnt * mul + bck), found = true;
            }
        }
    }
    if(found == false)
        cout << "No solution\n";
    else
        for(int i : ans)
            cout << i << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
