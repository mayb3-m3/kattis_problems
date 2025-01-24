#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>
#define pdd pair<double, double>

using namespace std;

void solve(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        double r, mx = -1e9, ans = 1;
        for(int i = 1; i <= n; i++){
            int a, b, c; cin >> a >> b >> c;
            r = b/(2.0*a);
            double res = -a*r*r + b*r + c;
            if(res > mx)
                mx = res, ans = i;
        }
        cout << ans << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
