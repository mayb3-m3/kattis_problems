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

vector<vector<int>> vtr;
vector<vector<int>> field;
vector<pii> cf;
vector<int> fx{0, 1, 0, -1};
vector<int> fy{-1, 0, 1, 0};

//to find all the coordinates with equal height
void cc(int x, int y, int mx, int my, int n){
    if(x < 0 || x >= mx || y < 0 || y >= my || vtr[y][x] != n || field[y][x] == -1)
        return;
    cf.push_back({x, y});
    field[y][x] = -1;
    for(int i = 0; i < 4; i++)
        cc(x+fx[i], y+fy[i], mx, my, n);
}

//to check is any field has a neighbour which is short in height
bool is_valid(int mx, int my, int n){
    for(auto p : cf){
        int x = p.first, y = p.second;
        if(x+1 < mx && vtr[y][x+1] < n)
            return false;
        if(x-1 >= 0 && vtr[y][x-1] < n)
            return false;
        if(y+1 < my && vtr[y+1][x] < n)
            return false;
        if(y-1 >= 0 && vtr[y-1][x] < n)
            return false;
    }
    return true;
}
void solve(){
    int x, y; cin >> x >> y;
    for(int i = 0; i < y; i++){
        vector<int> temp(x);
        for(int j = 0; j < x; j++)
            cin >> temp[j];
        vtr.push_back(temp);
    }
    field.assign(y, vector<int>(x, 0));
    int size = 0;
    for(int i = 0; i < y; i++){
        for(int j = 0; j < x; j++){
            if(field[i][j] == 0){
                cc(j, i, x, y, vtr[i][j]);
                if(is_valid(x, y, vtr[i][j]))
                    size += int(cf.size());
                cf.clear();
            }
        }
    }
    cout << size << endl;
}
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
