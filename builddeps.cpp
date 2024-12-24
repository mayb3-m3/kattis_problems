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

unordered_map<string, vector<string>> mp;
unordered_set<string> st;
vector<string> ans;

void dfs(string node){
    st.erase(node);
    for(string str : mp[node])
        if(st.find(str) != st.end())
            dfs(str);
    ans.push_back(node);
}
void solve(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        string parent, child; cin >> parent;
        parent.pop_back();
        st.insert(parent);
        getline(cin, child);
        if(!child.empty()){
            stringstream ss(child);
            while(ss >> child)
                mp[child].push_back(parent);
        }
    }
    string s; cin >> s;
    dfs(s);
    reverse(ans.begin(), ans.end());
    for(string str : ans)
        cout << str << endl;
}
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
