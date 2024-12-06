#include <bits/stdc++.h>
#define ll long long
#define imax INT_MAX
#define pll pair<ll, ll>
using namespace std;

bool func(vector<int> vtr, int n){
    for(int i = 1; i < n-1; i++){
        if(vtr[i]-vtr[i-1] != vtr[i+1]-vtr[i])
            return false;
    }
    return true;
}
void solve() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> vtr(n);
        for(int i = 0; i < n; i++)
            cin >> vtr[i];
        if(func(vtr, n))
            cout << "arithmetic\n";
        else{
            sort(vtr.begin(), vtr.end());
            if(func(vtr, n))
                cout << "permuted arithmetic\n";
            else
                cout << "non-arithmetic\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
