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
#define pie 3.141592653589793238
#define _e 2.718281828459045235

using namespace std;

void solve(){
    while(1){
        int n; cin >> n;
        if(n == 0)
            break;
        vector<int> vtr(n);
        for(int i = 0; i < n; i++)
            cin >> vtr[i];
        cin.ignore();
        string str;
        getline(cin, str);
        int l = str.size();
        if(l%n)
            str += string(n-l%n, ' ');
        l = str.size();
        cout << '\'';
        for(int i = 0; i < l; i += n){
            string group = str.substr(i, n);
            for(int i : vtr)
                cout << group[i-1];
        }
        cout << "\'" << endl;
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
