#include <bits/stdc++.h>
#define ll long long
#define imax INT_MAX
#define pii pair<int, int>
#define pll pair<ll, ll>
using namespace std;

void solve() {
    ll up, down;
    cin >> up;
    cin.ignore();
    cin >> down;
    ll a = 5*up - 160*down;
    ll b = 9*down;
    ll g = abs(__gcd(a, b));
    a /= g, b /= g;
    cout << a << "/" << b << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
