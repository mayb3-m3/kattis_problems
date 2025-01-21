#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>
#define pdd pair<double, double>

using namespace std;

int func(string a, string b){
    int cnt = 0, l1 = a.size(), l2 = b.size();
    if(a != b){
        int idx = 0;
        while(idx < min(l1, l2) && a[idx] == b[idx])
            idx++;
        cnt += l1+l2-2*idx;
    }
    return cnt;
}
void solve(){
    int t; cin >> t;
    while(t--){
        string a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        int ans = func(a, b);
        ans = min(ans, func(a, c)+1);
        ans = min(ans, func(a, d)+1);
        ans = min(ans, func(a, e)+1);
        cout << ans << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
