#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>
#define pdd pair<double, double>

using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    vector<int> v(n+m+2);
    int mx = 0;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            v[i+j]++, mx = max(mx, v[i+j]);
    for(int i = 0; i < n+m+2; i++)
        if(v[i] == mx)
            cout << i << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
