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

string modify(string str){
    string modified;
    for(char ch : str){
        if(ch != ' '){
            if(ch == 'J' || ch == 'j')
                ch = 'I';
            modified += toupper(ch);
        }
    }
    return modified;
}
void solve(){
    while(1){
        int t; cin >> t;
        cin.ignore();
        if(t == 0)
            break;
        string str, key;
        getline(cin, str);
        str += "ABCDEFGHIKLMNOPQRSTUVWXYZ";
        str = modify(str);
        unordered_set<char> st;
        for(char ch : str)
            if(st.find(ch) == st.end())
                key += ch, st.insert(ch);
        reverse(key.begin(), key.end());
        map<char, pii> mp;
        for(int i = 0; i < 5; i++)
            for(int j = 0; j < 5; j++)
                mp[key.back()] = {i, j}, key.pop_back();
        map<pii, char> rev_mp;
        for(auto i : mp){
            rev_mp[i.second] = i.first;
        }       
        while(t--){
            string str;
            getline(cin, str);
            str = modify(str);
            reverse(str.begin(), str.end());
            vector<string> digraph;
            while(!str.empty()){
                string di;
                di += str.back(), str.pop_back();
                if(str.empty())
                    di += "X";
                else{
                    di += str.back();
                    if(di[0] == di[1])
                        di[1] = 'X';
                    else
                        str.pop_back();
                }
                digraph.push_back(di);
            }
            for(string di : digraph){
                if(di == "XX"){
                    cout << "YY";
                    continue;
                }
                int r1 = mp[di[0]].first, c1 = mp[di[0]].second;
                int r2 = mp[di[1]].first, c2 = mp[di[1]].second;
                if(r1 == r2){
                    c1 = (c1+1)%5;
                    c2 = (c2+1)%5;
                }else if(c1 == c2){
                    r1 = (r1+1)%5;
                    r2 = (r2+1)%5;
                }else{
                    swap(c1, c2);
                }
                cout << rev_mp[{r1, c1}] << rev_mp[{r2, c2}];
            }
            cout << endl;
        }
        cout << endl;
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
