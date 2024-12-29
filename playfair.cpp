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

string format(string str){
    string ans;
    for(char ch : str)
        if(ch != ' ')
            ans += ch-32;
    return ans;
}
void solve(){
    string key, text;
    getline(cin, key);
    getline(cin, text);
    key = format(key);
    text = format(text);
    key += "ABCDEFGHIJKLMNOPRSTUVWXYZ";
    unordered_set<char> st;
    string final_key;
    for(char ch : key){
        if(st.find(ch) == st.end())
           st.insert(ch), final_key.push_back(ch); 
    } 
    map<char, pii> mp;
    map<pii, char> rev_mp;
    int pos = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            mp[final_key[pos]] = {i, j};
            rev_mp[{i, j}] = final_key[pos++];
        }
    }
    reverse(text.begin(), text.end());
    vector<string> vtr;
    while(!text.empty()){
        string di;
        di.push_back(text.back());
        text.pop_back();
        if(text.empty() || di[0] == text.back())
            di += "X";
        else{
            di.push_back(text.back());
            text.pop_back();
        }
        vtr.push_back(di);
    }
    for(string s : vtr){
        int r1 = mp[s[0]].first, c1 = mp[s[0]].second;
        int r2 = mp[s[1]].first, c2 = mp[s[1]].second;
        if(r1 == r2){
            c1 = (c1+1)%5;
            c2 = (c2+1)%5;
        }else if(c1 == c2){
            r1 = (r1+1)%5;
            r2 = (r2+1)%5;
        }else
            swap(c1, c2);
        cout << rev_mp[{r1, c1}] << rev_mp[{r2, c2}];
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
