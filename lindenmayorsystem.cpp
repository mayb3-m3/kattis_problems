#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>
#define pdd pair<double, double>

using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    unordered_map<char, string> mp;
    for(int i = 0; i < n; i++){
        char ch;
        string dummy, s;
        cin >> ch >> dummy >> s;
        mp[ch] = s;
    }
    string root; cin >> root;
    for(int i = 0; i < m; i++){
        string temp;
        for(char ch : root){
            if(mp.find(ch) != mp.end())
                temp += mp[ch];
            else
                temp += ch;
        }
        root = temp;
    }
    cout << root << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
