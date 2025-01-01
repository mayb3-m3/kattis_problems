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

void solve(){
    int n, m; cin >> n >> m;
    string str1, str2;
    cin >> str1 >> str2;
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
    string str = "abcdefghijklmnopqrstuvwxyz";
    for(int i = 0; i < m-1; i++){
        char ch = 'a' + (str2[i]-str1[i]+26)%26;
        str1.push_back(ch);
    }
    for(int i = m-1; i >= 0; i--)
        cout << str1[i];
}
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
