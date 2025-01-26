#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>
#define pdd pair<double, double>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.rbegin(), v.rend());
    int mx = -1e9;
    for(int i = 1; i <= n; i++)
        mx = max(mx, v[i-1]+i);
    cout << mx+1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
