#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>
#define pdd pair<double, double>

using namespace std;

void solve(){
    int n, p, k; cin >> n >> p >> k;
    vector<int> vtr(n+2);
    vtr[n+1] = k;
    for(int i = 1; i <= n; i++)
        cin >> vtr[i];
    double speed = 1, ans = 0;
    for(int i = 1; i <= n+1; i++){
        ans += (vtr[i]-vtr[i-1])*speed;
        speed += p/100.0;
    }
    cout << fixed << setprecision(6) << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
