#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>
#define pdd pair<double, double>

using namespace std;

vector<int> func(string str){
    stringstream ss(str);
    vector<int> ans;
    string s;
    while(ss >> s)
        ans.push_back(stoi(s));
    return ans;
}
void solve(){
    string str;
    while(getline(cin, str)){
        vector<int> v(func(str));
        int sum = accumulate(v.begin(), v.end(), 0);
        for(int i : v){
            if(2*i == sum){
                cout << i << endl;
                break;
            }  
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
