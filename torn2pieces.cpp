#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>

using namespace std;

vector<unordered_set<int>> ajl;
vector<int> visited, ans;
bool is_path = false;

vector<string> func(string str){
    stringstream ss(str);
    string s;
    vector<string> ans;
    while(ss >> s)
        ans.push_back(s);
    return ans;
}

void dfs(int node, int dest){
    if(is_path) return;

    ans.push_back(node);
    visited[node] = true;
    
    if(node == dest){
        is_path = true;
        return;
    }

    for(int i : ajl[node])
        if(visited[i] == false)
            dfs(i, dest);

    if(is_path) return;
    ans.pop_back();
}

void solve(){
    int n, pos = 0, a, b; cin >> n;
    cin.ignore();
    ajl.assign(32, unordered_set<int>());
    visited.assign(32, false);
    unordered_map<string, int> mp;
    for(int i = 0; i < n; i++){
        string str;
        getline(cin, str);
        vector<string> v(func(str));

        if(mp.find(v[0]) != mp.end()) a = mp[v[0]];
        else a = pos++, mp[v[0]] = a;

        for(int i = 1; i < int(v.size()); i++){
            if(mp.find(v[i]) != mp.end()) b = mp[v[i]];
            else b = pos++, mp[v[i]] = b;
            ajl[a].insert(b);
            ajl[b].insert(a);
        }
    }

    string s, e; cin >> s >> e;
    if(mp.find(s) == mp.end() || mp.find(e) == mp.end()){
        cout << "no route found\n";
        return;
    }
    dfs(mp[s], mp[e]);
    if(is_path){
        unordered_map<int, string> rev;
        for(auto i : mp)
            rev[i.second] = i.first;
        for(int i : ans)
            cout << rev[i] << " ";
        cout << endl;
    }else
        cout << "no route found\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
