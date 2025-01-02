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

string m = " abcdefghijklmnopqrstuvwxyz";

void encrypt(string str){
    vector<int> vtr;
    for(char ch : str){
        if(ch == ' ')
            vtr.push_back(0);
        else
            vtr.push_back(ch-'a'+1);
    }
    for(int i = 1; i < int(vtr.size()); i++)
        vtr[i] += vtr[i-1];
    for(int& i : vtr)
        i %= 27;
    for(int i : vtr)
        cout << m[i];
    cout << endl;
}

void decrypt(string str){
    vector<int> vtr;
    for(char ch : str){
        if(ch == ' ')
            vtr.push_back(0);
        else
            vtr.push_back(ch-'a'+1);
    }
    int l = vtr.size();
    for(int i = 1; i < l; i++){
        while(vtr[i] < vtr[i-1])
            vtr[i] += 27;
    }
    for(int i = l-1; i >= 1; i--)
        vtr[i] -= vtr[i-1];
    for(int i : vtr)
        cout << m[i];
    cout << endl;
}

void solve(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string str;
        getline(cin, str);
        char ch = str[0];
        str = str.substr(2);
        if(ch == 'e')
            encrypt(str);
        else
            decrypt(str);
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
