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
        vector<string> vtr(n);
        for(int i = 0; i < n; i++)
            cin >> vtr[i];
        sort(vtr.begin(), vtr.end());
        bool ans = true;
        for(int i = 0; i < n-1; i++){
            int l1 = vtr[i].size();
            int l2 = vtr[i+1].size();
            if(l1 <= l2 && vtr[i+1].substr(0, l1) == vtr[i]){
                ans = false;
                break;
            }
        }
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
