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

int pos = 0;
void rotateAndinsert(vector<string>& vtr, int n, vector<string>& grid, string str){
    vector<string> ans(n, string(n, '#'));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            ans[j][n-i-1] = vtr[i][j];
            if(vtr[i][j] == '.')
                grid[i][j] = str[pos++];
        }
    }
    vtr = ans;
}
void solve(){
    int n; cin >> n;
    vector<string> key(n), grid(n, string(n, '#'));
    for(int i = 0; i < n; i++)
        cin >> key[i];
    string str; cin >> str;
    int count = 0;
    for(string str : key)   
        for(char ch : str)
            if(ch == '.')
                count++;
    if(4*count != n*n){
        cout << "invalid grille\n";
        return;
    }
    rotateAndinsert(key, n, grid, str);
    rotateAndinsert(key, n, grid, str);
    rotateAndinsert(key, n, grid, str);
    rotateAndinsert(key, n, grid, str);
    for(string str : grid){
        for(char ch : str){
            if(ch == '#'){
                cout << "invalid grille\n";
                return;
            }
        }
    }
    for(string str : grid)
        cout << str;
}
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
