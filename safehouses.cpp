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

void solve(){
    vector<pii> spies, houses;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        for(int j = 0; j < n; j++){
            if(str[j] == 'S')
                spies.push_back({i, j});
            if(str[j] == 'H')
                houses.push_back({i, j});
        }
    }
    int mx = -1;
    for(auto i : spies){
        int mn = imax;
        for(auto j : houses)
            mn = min(mn, abs(i.first-j.first)+abs(i.second-j.second));
        mx = max(mx, mn);
    }
            
    cout << mx << endl;
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
