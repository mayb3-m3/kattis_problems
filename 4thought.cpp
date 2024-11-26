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
#define mod 1000000007
#define pie 3.141592653589793238
#define _e 2.718281828459045235

using namespace std;

void red(vector<string>& vtr, string s1, string s2){
    int t = 3;
    while(t--){
        for(int i = 0; i < int(vtr.size()); i++){
            if(vtr[i] == s1 && s1 == "*")
                vtr[i] = to_string(stoi(vtr[i-1])*stoi(vtr[i+1]));
            else if(vtr[i] == s2 && s2 == "/")
                vtr[i] = to_string(stoi(vtr[i-1])/stoi(vtr[i+1]));
            else if(vtr[i] == s1 && s1 == "+")
                vtr[i] = to_string(stoi(vtr[i-1])+stoi(vtr[i+1]));
            else if(vtr[i] == s2 && s2 == "-")
                vtr[i] = to_string(stoi(vtr[i-1])-stoi(vtr[i+1]));
            else
                continue;
            vtr[i-1] = vtr[i+1] = "#";
            break;
        }
        vector<string> temp;
        for(string str : vtr)
            if(str != "#")
                temp.push_back(str);
        vtr = temp;
    }
}

void solve(){
    int t; cin >> t;
    while(t--){
        int n, get = 0; cin >> n;
        vector<string> v{"+", "-", "*", "/"};
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                for(int k = 0; k < 4; k++){
                    vector<string> vtr{"4", v[i], "4", v[j], "4", v[k], "4"};
                    vector<string> ans{"4", v[i], "4", v[j], "4", v[k], "4"};
                    red(vtr, "*", "/");
                    red(vtr, "+", "-");
                    if(vtr.size() == 1 && stoi(vtr[0]) == n){
                        get = 1;
                        for(string str : ans)
                            cout << str << " ";
                        cout << "= " << n << endl;
                        i = j = k = 4;
                    }
                }
            }
        }
        if(!get)
            cout << "no solution\n";
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
