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
    ll a, b;
    char ch;
    while(cin >> a >> ch >> b){
        ll count = 0;
        for(ll x = b+1; ; x++){
            if(x*b % (x-b) == 0){
                count++;
                if(x*b / (x-b) == x)
                    break;
            }
        }
        cout << count << endl;
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
