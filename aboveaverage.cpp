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
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        double avg = accumulate(v.begin(), v.end(), 0) / double(n);
        int cnt = 0;
        for(int i : v)
            if(i > avg)
                cnt++;
        cout << fixed << setprecision(3) << cnt/double(n)*100 << "%\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
