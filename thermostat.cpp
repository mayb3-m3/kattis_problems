#include <bits/stdc++.h>
#define ll long long
#define imax INT_MAX
#define pii pair<int, int>
#define pll pair<ll, ll>
using namespace std;

void solve() {
    ll n, q; cin >> n >> q;
    vector<pii> vtr(n);
    for(ll i = 0; i < n; i++)
        cin >> vtr[i].first >> vtr[i].second;
    for(ll i = 0; i < q; i++){
        ll from, to, x;
        cin >> from >> to >> x;
        ll a1 = vtr[from-1].first, b1 = vtr[from-1].second;
        ll a2 = vtr[to-1].first, b2 = vtr[to-1].second;
        ll up = (x-a1)*(b2-a2) + (b1-a1)*a2;
        ll down = b1-a1;
        ll gcd = __gcd(up, down);
        up /= gcd, down /= gcd;
        if(up*down < 0) 
            cout << "-" << abs(up) << "/" << abs(down) << endl;
        else
            cout << abs(up) << "/" << abs(down) << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
