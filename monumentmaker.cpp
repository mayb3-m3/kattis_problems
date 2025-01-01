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
    int n, d, w;
    cin >> n >> d >> w;
    string ans;
    for(int i = 0; i <  n; i++){
        string str; cin >> str;
        if(i % 2)
            reverse(str.begin(), str.end());
        ans += str;
    }
    ans += ".";
    string str;
    vector<int> vtr;
    for(char ch : ans){
        if(ch == '.')
            vtr.push_back(str.size()), str = "";
        else    
            str += ch;
    }
    int count = 1, l = 0, words = 0;
    for(int i : vtr){
        if(l + i + words <= w)
            words++, l += i;
        else
            count++, words = 1, l = i;
    }
    cout << count << endl;
}
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
