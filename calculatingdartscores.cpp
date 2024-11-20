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
#define e_ 2.718281828459045235

using namespace std;

void solve(){
    int n; cin >> n;
    unordered_set<int> st;
    for(int i = 0; i <= 20; i++)
        st.insert({i, 2*i, 3*i});
    vector<int> vtr(st.begin(), st.end());
    int l = vtr.size();
    for(int i = 0; i < l; i++){
        for(int j = 0; j < l; j++){
            for(int k = 0; k < l; k++){
                if(vtr[i]+vtr[j]+vtr[k] == n){
                    if(vtr[i] && vtr[i] % 3 == 0)
                        cout << "triple " << vtr[i]/3 << endl;
                    else if(vtr[i] && vtr[i] % 2 == 0)
                        cout << "double " << vtr[i]/2 << endl;
                    else if(vtr[i])
                        cout << "single " << vtr[i] << endl;
                    if(vtr[j] && vtr[j] % 3 == 0)
                        cout << "triple " << vtr[j]/3 << endl;
                    else if(vtr[j] && vtr[j] % 2 == 0)
                        cout << "double " << vtr[j]/2 << endl;
                    else if(vtr[j])
                        cout << "single " << vtr[j] << endl;;
                    if(vtr[k] && vtr[k] % 3 == 0)
                        cout << "triple " << vtr[k]/3 << endl;
                    else if(vtr[k] && vtr[k] % 2 == 0)
                        cout << "double " << vtr[k]/2 << endl;
                    else if(vtr[k])
                        cout << "single " << vtr[k] << endl;
                    return;
                }
            }
        }
    }
    cout << "impossible\n";
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
