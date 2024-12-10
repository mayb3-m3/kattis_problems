#include <bits/stdc++.h>
#define imax INT_MAX
#define llmax INT64_MAX
#define ll long long
#define ull unsigned long long
#define _rand(x,y) min(x,y)+rand()%(abs(y-x)+1)
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pss pair<string, string>
#define psi pair<string, int>
#define pis pair<int, string>
#define mod 1000000007
#define pie 3.141592653589793238
#define _e 2.718281828459045235

using namespace std;

void solve(){
    ll t; cin >> t;
    while(t--){
        ll a1, b1, a2, b2;
        char ch;
        cin >> a1 >> b1 >> ch >> a2 >> b2;
        ll g1 = abs(__gcd(a1, b1));
        ll g2 = abs(__gcd(a2, b2));
        a1 /= g1, b1 /= g1;
        a2 /= g2, b2 /= g2;
        ll up, down;
        if(ch == '+'){
            up = a1*b2 + a2*b1;
            down = b1*b2;
        }else if(ch == '-'){
            up = a1*b2 - a2*b1;
            down = b1*b2;
        }else if(ch == '*'){
            up = a1*a2;
            down = b1*b2;
        }else{
            up = a1*b2;
            down = a2*b1;
        }
        ll g = abs(__gcd(up, down));
        up /= g, down /= g;
        double u = up, d = down;
        if(u*d < 0)
            up = -abs(up), down = abs(down);
        else
            up = abs(up), down = abs(down);
        cout << up << " / " << down << endl;
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
