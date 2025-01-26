#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>
#define pdd pair<double, double>

using namespace std;

int sum(int n){
    int ans = 0;
    while(n)
        ans += n%10, n /= 10;
    return ans;
}
void solve(){
    int l, d, x; cin >> l >> d >> x;
    int mn = 1e9, mx = -1e9;
    for(int i = l; i <= d; i++){
        if(sum(i) == x)
            mn = min(mn, i), mx = max(mx, i);
    }
    cout << mn << endl << mx << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
