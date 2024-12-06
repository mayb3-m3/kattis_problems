#include <bits/stdc++.h>
#define ll long long
#define imax INT_MAX
#define pll pair<ll, ll>
using namespace std;

void solve() {
    while(1){
        ll a, b; cin >> a >> b;
        ll n1 = a, n2 = b;
        if(a == 0 && b == 0)
            break;
        unordered_map<ll, ll> mp;
        ll a_steps = 0, b_steps = 0;
        for(int i = 0; i <= 1e3; i++){
            if(a == 1){
                mp[a] = a_steps;
                break;
            }
            mp[a] = a_steps++;
            if(a % 2 == 0)
                a /= 2;
            else
                a = 3*a + 1;
        }
        for(int i = 0; i <= 1e3; i++){
            if(mp.find(b) != mp.end()){
                cout << n1 << " needs " << mp[b] << " steps, ";
                cout << n2 << " needs " << b_steps << " steps, ";
                cout << "they meet at " << b << endl;
                break;
            }
            b_steps++;
            if(b % 2 == 0)
                b /= 2;
            else    
                b = 3*b + 1;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
