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

int manhattan(pii p1, pii p2){
    return abs(p1.first-p2.first)+abs(p1.second-p2.second);
}
void solve(){
    unordered_map<char, pii> mp;
    char ch = 'A';
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            mp[ch++] = {i, j};
    
    int ans = 0;
    for(int i = 0; i < 4; i++){
        string str; cin >> str;
        for(int j = 0; j < 4; j++){
            if(str[j] != '.')
                ans += manhattan({i,j}, mp[str[j]]);
        }
    }
    cout << ans << endl;
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
