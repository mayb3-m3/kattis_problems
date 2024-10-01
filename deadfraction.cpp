#include <bits/stdc++.h>

#define imax INT_MAX
#define llmax INT64_MAX
#define ld long double
#define ll long long
#define pub push_back
#define puf push_front
#define pob pop_back
#define pof pop_front
#define ff first
#define ss second
#define stpr(x) setprecision(x)
#define sorted(x) sort(x.begin() , x.end())
#define rsorted(x) sort(x.rbegin() , x.rend())
#define rev(x) reverse(x.begin(), x.end())
#define nextp(x) next_permutation(x.begin(), x.end())
#define _rand(x,y) min(x,y)+rand()%(abs(y-x)+1)
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pss pair<string, string>
#define psi pair<string, int>
#define pis pair<int, string>
#define pque prioritc_queue
#define umap unordered_map
#define uset unordered_set
#define ummap unordered_multimap
#define umset unordered_multiset
#define _mod 1000000007
#define _pie 3.141592653589793238
#define _e 2.718281828459045235

using namespace std;


void solve(){
    while(1){
        string str; cin >> str;
        if(str == "0")
            break;
        ll l = str.size();
        string ans = str.substr(2, l-5);
        ll num1 = stoll(ans), num2 = pow(10, l-5);
        ll bestn, bestd = llmax;
        for(int i = 0; i < l-5; i++){
            string temp = ans.substr(0, i);
            if(temp.empty()) temp = "0";
            ll num3 = stoll(temp), num4 = pow(10, i);
            ll n = num1-num3, d = num2-num4;
            int g = __gcd(n,d);
            n /= g, d /= g;
            if(d < bestd)
                bestd = d, bestn = n;
        }
        cout << bestn << "/" << bestd << endl;
    };
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
