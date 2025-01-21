#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>
#define pdd pair<double, double>

using namespace std;

vector<string> split(string str){
    stringstream ss(str);
    string s;
    vector<string> ans;
    while(ss >> s)
        ans.push_back(s);
    return ans;
}

bool func(string s1, string s2, vector<string> vtr){
    bool a = false, b = false;
    int l1 = s1.size(), l2 = s2.size();
    for(string s : vtr){
        int l = s.size();
        if(l1 >= l && s1.substr(l1-l) == s)
            a = true;
        if(l2 >= l && s2.substr(l2-l) == s)
            b = true;
    }
    return a && b;
}
void solve(){
    string str; cin >> str;
    int n; cin >> n;
    cin.ignore();
    vector<vector<string>> vtr(n);
    for(int i = 0; i < n; i++){
        string temp;
        getline(cin, temp);
        vtr[i] = split(temp);
    }
    int m; cin >> m;
    cin.ignore();
    for(int i = 0; i < m; i++){
        string temp; 
        getline(cin, temp);
        string s = split(temp).back();
        bool found = false;
        for(auto v : vtr){
            if(func(str, s, v)){
                cout << "YES\n";
                found = true;
                break;
            }
        }
        if(found == false)
            cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
