#include <bits/stdc++.h>
#define ll long long
#define imax INT_MAX
#define pll pair<ll, ll>
using namespace std;

void func(ll n, ll& sum){
    sum += n;
    if(n == 1){
        return;
    }
    if(n % 2 == 0)
        n /= 2;
    else
        n = 3*n + 1;
    func(n, sum);
}
void solve() {
    ll n; cin >> n;
    ll sum = 0;
    func(n, sum);
    cout << sum << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
