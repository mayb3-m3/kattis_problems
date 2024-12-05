#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int t; cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> vtr;
        while(c/b){
            vtr.push_back(c%b);
            c /= b;
        }
        if(c)
            vtr.push_back(c);
        int ans = 0;
        for(int i : vtr)
            ans += i*i;
        cout << a << " " << ans << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
