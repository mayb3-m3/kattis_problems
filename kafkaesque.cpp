#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>
#define pds pair<double, string>
#define vi vector<int>
#define vvi vector<vi>
#define ll long long

using namespace std;

void solve(){
    int n; cin >> n;
    int cnt = 1, prev = 0;
    for(int i = 0; i < n; i++){
        int t; cin >> t;
        if(t < prev)
            cnt++;
        prev = t;
    }
    cout << cnt << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
