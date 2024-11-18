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
    vector<int> vtr(9);
    for(int i = 0; i < 9; i++)
        cin >> vtr[i];
    int sum = accumulate(vtr.begin(), vtr.end(), 0);
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(i != j && sum-vtr[i]-vtr[j] == 100){
                vtr[i] = -1, vtr[j] = -1;
                i = imax-5, j = imax-5;
            }
        }
    }
    for(int i : vtr)
        if(i != -1)
            cout << i << endl;
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
