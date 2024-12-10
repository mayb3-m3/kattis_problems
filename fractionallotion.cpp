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
    ll before, num;
    string after;
    cin >> before;
    cin.ignore();
    cin >> after >> num;
    ll whole = stoll(to_string(before)+after);
    int l = after.size();
    string nrep, rep;
    nrep = after.substr(0, l-num);
    rep = after.substr(l-num);
    ll part = stoll(to_string(before)+nrep);
    ll tens1 = 1, tens2 = 1;
    for(int i = 0; i < l; i++)   
        tens1 *= 10;
    for(int i = 0; i < int(nrep.size()); i++)
        tens2 *= 10;
    ll up = whole - part;
    ll down = tens1 - tens2;
    ll g = __gcd(up, down);
    cout << up/g << "/" << down/g << endl;
 }
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
