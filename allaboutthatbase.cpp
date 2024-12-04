#include <bits/stdc++.h>
using namespace std;

#define ll long long

int mn_base(string s, unordered_map<char, int> mp){
    int mx = 1;
    for(char ch : s)
        mx = max(mx, mp[ch]);
    return mx+1;
}

bool one_based(string s){
    for(char ch : s)
        if(ch != '1')
            return false;
    return true;
}

int to_deci(string s, int b, unordered_map<char, int> mp){
    int n = s.size()-1, sum = 0, mul = 1;
    for(int i = n; i >= 0; i--)
        sum += mp[s[i]]*mul, mul *= b;
    return sum;
}
void solve() {
    unordered_map<char, int> mp;
    for(char ch = '0'; ch <= '9'; ch++)
        mp[ch] = ch-48;
    for(char ch = 'a'; ch <= 'z'; ch++)
        mp[ch] = ch-87;
    unordered_map<int, char> rev;
    for(auto i : mp)
        rev[i.second] = i.first;
    rev[36] = '0';
    int t; cin >> t;
    while(t--){
        string s1, s2, s3, s4, s5;
        cin >> s1 >> s2 >> s3 >> s4 >> s5;
        int mn = mn_base(s1+s3+s5, mp), get = 0;
        if(one_based(s1) && one_based(s3) && one_based(s5))
            mn = 1;
        for(int i = mn; i <= 36; i++){
            int a = to_deci(s1, i, mp);
            int b = to_deci(s3, i, mp);
            int c = to_deci(s5, i, mp);
            if(s2 == "+" && (a+b == c))
                cout << rev[i], get = 1;
            if(s2 == "-" && (a-b == c))
                cout << rev[i], get = 1;
            if(s2 == "*" && (a*b == c))
                cout << rev[i], get = 1;
            if(s2 == "/" && a%b == 0 && a/b == c)
                cout << rev[i], get = 1;
        }
        if(get == 0)
            cout << "invalid";
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
