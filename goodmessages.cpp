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
    int a, b, c = 0; cin >> a;
    string str; cin >> str;
    cin >> b;
    unordered_map<char, int> mp1;
    for(char ch = 'a'; ch <= 'z'; ch++)
        mp1[ch] = c++;
    unordered_map<int, char> mp2;
    for(auto i : mp1)
        mp2[i.second] = i.first;
    int happy = 0, unhappy = 0;
    for(int i = 0; i < b; i++){
        for(char& ch : str){
            ch = mp2[(mp1[ch]+a)%26];
        }
        int con = 0, vow = 0;
        for(char ch : str){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y')
                vow++;
            else
                con++;
        }
        if(2*vow >= con)    
            unhappy++;
        else
            happy++;
    }
    if(happy > unhappy)
        cout << "Boris\n";
    else
        cout << "Colleague\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
