#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll dec(string str, int b){
    ll n = str.size()-1, sum = 0, mul = 1;
    for(int i = n; i >= 0; i--){
        if(str[i] >= 'a')
            sum += (str[i]-'a'+10)*mul;
        else if(str[i] >= 'A')
            sum += (str[i]-'A'+10)*mul;
        else
            sum += (str[i]-'0')*mul;
        mul *= b;
    }
    return sum;
}

void solve() {
    string str;
    while(getline(cin, str)){
        int l = str.size();
        vector<string> f;
        for(int i = 0; i < l-1; i++)
            if(str[i] == '0' && (str[i+1] == 'x' || str[i+1] == 'X'))
                f.push_back(str.substr(i, min(10, l-i+1)));
        unordered_set<char> st;
        for(char ch = '0'; ch <= '9'; ch++) st.insert(ch);
        for(char ch = 'a'; ch <= 'f'; ch++) st.insert(ch);
        for(char ch = 'A'; ch <= 'F'; ch++) st.insert(ch);
        vector<string> ans;
        for(string s : f){
            string t = s.substr(0,2);
            for(int i = 2; i < int(s.size()); i++){
                if(st.find(s[i]) != st.end())
                    t += s[i];
                else
                    break;
            }
            if(t.size() >= 3)
                ans.push_back(t);
        }
        for(string &s : ans){
            cout << s << " " << dec(s.substr(2), 16) << endl;
        }    
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
