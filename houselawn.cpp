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

vector<string> parse(string str){
    stringstream ss(str);
    vector<string> ans;
    string s;
    char sep = ',';
    while(getline(ss, s, sep))
        ans.push_back(s);
    return ans;
}
void solve(){
    ll l, m; cin >> l >> m;
    cin.ignore();
    vector<psi> ans;
    for(int i = 0; i < m; i++){
        string str;
        getline(cin, str);
        vector<string> v = parse(str);
        ll p = stoll(v[1]), c = stoll(v[2]);
        ll t = stoll(v[3]), r = stoll(v[4]);
        if(10080*t*c >= l*(t+r)){
            if(ans.empty())
                ans.push_back({v[0], p});
            else{
                ll price = ans.back().second;
                if(price == p)
                    ans.push_back({v[0], p});
                else if(price > p){
                    ans.pop_back();
                    ans.push_back({v[0], p});
                }
            }
        }
    }
    if(ans.empty())
        cout << "no such mower\n";
    else
        for(auto p : ans)
            cout << p.first << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
