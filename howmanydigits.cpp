#include <bits/stdc++.h>

#define imax INT_MAX
#define llmax INT64_MAX
#define ll long long
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
    vector<double> vtr(1000001);
    for(int i = 1; i < 1000001; i++)
        vtr[i] = vtr[i-1] + log10(i);
    int n;
    while(cin >> n){
        cout << int(vtr[n])+1 << endl;
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
