#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>
#define pdd pair<double, double>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> vtr(n);
    for(int i = 0; i < n; i++)
        cin >> vtr[i];
    int mn = 1e9;
    for(int i = 0; i < n; i++)
        mn = min(mn, vtr[i]+vtr[(i+2)%n]);
    cout << mn << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
