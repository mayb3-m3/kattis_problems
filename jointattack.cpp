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
#define mod 1000000007
#define pie 3.141592653589793238
#define _e 2.718281828459045235

using namespace std;

void solve(){
    ll n; cin >> n;
    vector<ll> vtr(n);
    for(ll i = 0; i < n; i++)
        cin >> vtr[i];
    reverse(vtr.begin(), vtr.end());
    ll up = 1, down = vtr[0];
    for(ll i = 1; i < n; i++){
        up = down*vtr[i] + up;
        swap(up, down);
        ll g = __gcd(up, down);
        up /= g, down /= g;
    }
    cout << down << "/" << up << endl;
}
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
