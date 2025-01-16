#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>

using namespace std;

vector<vector<int>> ajl;
vector<bool> visited, exploring;

void dfs(int node, bool& is_ci){
    visited[node] = true;
    exploring[node] = true;
    for(int i : ajl[node]){
        if(visited[i] == false)
            dfs(i, is_ci);
        else if(exploring[i] == true)
            is_ci = true;
    }
    exploring[node] = false;
}
void solve(){
    int n, pos = 0; cin >> n;
    ajl.assign(5000 ,vector<int>());
    unordered_map<string, int> mp;
    for(int i = 0; i < n; i++){
        string str1, str2;
        cin >> str1 >> str2;
        int pos1, pos2;
        if(mp.find(str1) != mp.end()) pos1 = mp[str1];
        else pos1 = pos++;
        if(mp.find(str2) != mp.end()) pos2 = mp[str2];
        else pos2 = pos++;
        mp[str1] = pos1, mp[str2] = pos2;
        ajl[pos1].push_back(pos2);
    }
    vector<int> start;
    vector<string> city;
    string str;
    while(cin >> str){
        start.push_back(mp[str]);
        city.push_back(str);
    }
    for(int i = 0; i < int(start.size()); i++){
        visited.assign(5000, false);
        exploring.assign(5000, false);
        bool is_ci = false;
        dfs(start[i], is_ci);
        cout << city[i] << " ";
        if(is_ci) cout << "safe\n";
        else cout << "trapped\n"; 
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
