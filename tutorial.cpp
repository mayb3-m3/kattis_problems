#include <bits/stdc++.h>

#define imax INT_MAX
#define llmax INT64_MAX
#define ll long long
#define sorted(x) sort(x.begin() , x.end())
#define rsorted(x) sort(x.rbegin() , x.rend())
#define nextp(x) next_permutation(x.begin(), x.end())
#define _rand(x,y) min(x,y)+rand()%(abs(y-x)+1)
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pss pair<string, string>
#define psi pair<string, int>
#define pis pair<int, string>
#define mod 1000000007
#define pie 3.141592653589793238
#define e_ 2.718281828459045235

using namespace std;

ll fact(int n){
    ll ans = 1;
    for(ll i = 2; i <= n; i++)
        ans *= i;
    return ans;
}

void solve(){
    string ac = "AC", tle = "TLE";
    ll m, n, t;
    cin >> m >> n >> t;
    if(t == 1 && n <= 15){
        ll ans = fact(n);
        if(ans <= m)
            cout << ac;
        else
            cout << tle;
    }else if(t == 2 && n <= 50){
        if(pow(2, n) <= m)
            cout << ac;
        else
            cout << tle;
    }else if(t == 3 && n <= 4000){
        if(n*n*n*n <= m)
            cout << ac;
        else
            cout << tle;
    }else if(t == 4 && n <= 40000){
        if(n*n*n <= m)
            cout << ac;
        else
            cout << tle;
    }else if(t == 5){
        if(n*n <= m)
            cout << ac;
        else    
            cout << tle;
    }else if(t == 6){
        if(n*log2(n) <= m)
            cout << ac;
        else    
            cout << tle;
    }else if(t == 7){
        if(n <= m)
            cout << ac;
        else
            cout << tle;
    }else
        cout << tle;
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
