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

bool is_prime(ll n){
    if(n == 0 || n == 1)
        return false;
    if(n == 2)
        return true;
    for(ll i = 2; i*i <= n; i++)
        if(n % i == 0)
            return false;
    return true;
}

void solve(){
    int n; cin >> n;
    if(is_prime(n)){
        cout << n << endl;
        return;
    }
    ll mx_base = 2, mx_count = -1;
    for(ll i = 2; i <= 100000; i++){
        ll t_num = n, t_count = 0;
        while(t_num % i == 0 && t_num)
            t_count++, t_num /= i;
        if(t_count > mx_count)
        mx_base = i, mx_count = t_count;
    }
    cout << mx_base << endl;

}
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
