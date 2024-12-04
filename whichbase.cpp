#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mn_base(int n){
    int mx = 1;
    while(n){
        mx = max(mx, n%10), n /= 10;
    }
    return mx+1;
}

int val(int n, int b){
    int ans = 0, mul = 1;
    while(n)
        ans += (n%10)*mul, n /= 10, mul *= b;
    return ans;
}

void solve() {
    int t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
        int mn = mn_base(b);
        cout << a << " ";
        if(mn <= 8)
            cout << val(b, 8) << " ";
        else
            cout << "0 ";
        cout << b << " " << val(b, 16) << endl;
    }   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
