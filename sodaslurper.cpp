#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>
#define pdd pair<double, double>

using namespace std;

void solve(){
    int e, f, c; cin >> e >> f >> c;
    int cnt = 0;
    e += f;
    while(e >= c)
        cnt += e/c, e = e/c + e%c;
    cout << cnt << endl;    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
