#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>
#define pdd pair<double, double>
#define vi vector<int>
#define vvi vector<vi>
#define ll long long

using namespace std;

ll func(ll n){
    if(n == -1)
        return 0;
    string str = to_string(n);
    ll cnt = 1, l = str.size();
    for(int i = 1; i < l; i++){
        ll cur, lft, rgt, pwr;
        cur = str[i] - '0';
        lft = stoll(str.substr(0, i));
        if(i < l-1) rgt = stoi(str.substr(i));
        else rgt = 0;
        pwr = round(pow(10, l-i-1));

        if(cur == 0)
            cnt += (lft - 1) * pwr + rgt + 1;
        else
            cnt += lft * pwr;
    }
    return cnt;
}
void solve(){
    while(1){
        ll m, n; cin >> m >> n;
        if(m <= -1)
            break;
        cout << func(n) - func(m-1) << endl;;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
