#include <bits/stdc++.h>
#define ll long long
#define imax INT_MAX
#define pll pair<ll, ll>
using namespace std;

void solve() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string str; cin >> str;
        stringstream ss(str);
        ll up, down;
        char ch;
        ss >> up >> ch >> down;
        if(down == 1)
            cout << n << " " << down << "/" << down+up << endl; 
        else if(up < down)
            cout << n << " " << down << "/" << down-up << endl;
        else{
            int count = up/down;
            up = up % down;
            ll t = up;
            up = down;
            down = (down - t) + count*up;
            cout << n << " " << up << "/" << down << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
