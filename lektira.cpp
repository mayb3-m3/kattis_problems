#include <bits/stdc++.h>

#define imax INT_MAX
#define llmax INT64_MAX
#define ll long long
#define _rand(x,y) min(x,y)+rand()%(abs(y-x)+1)
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pss pair<string, string>
#define psi pair<string, int>
#define pis pair<int, string>
#define mod 1000000007
#define pie 3.141592653589793238
#define e_ 2.718281828459045235

using namespace std;
string func(string s, int n1, int n2){
    string s1 = s.substr(0, n1+1);
    string s2 = s.substr(n1+1, n2-n1-1);
    string s3 = s.substr(n2);
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    reverse(s3.begin(), s3.end());
    return s1+s2+s3;
}
void solve(){
    string str;
    cin >> str;
    int l = str.size();
    string ans = "{}";
    for(int i = 0; i < l-1; i++){
        for(int j = i+2; j < l; j++){
            ans = min(ans, func(str, i, j));
        }
    }
    cout << ans << endl;
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
