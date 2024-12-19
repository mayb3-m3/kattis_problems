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

vector<string> vtr;
vector<int> fx{0, 1, 0, -1};
vector<int> fy{-1, 0, 1, 0};

void dsf(int y, int x, int my, int mx){
    if(y < 0 || y >= my || x < 0 || x >= mx || vtr[y][x] == '#')
        return;
    vtr[y][x] = '#';
    for(int i = 0; i < 4; i++)
        dsf(y+fy[i], x+fx[i], my, mx);
}
void solve(){
    int n, m, c = 1;
    while(cin >> n >> m){
        vtr.assign(n, string());
        for(int i = 0; i < n; i++)
            cin >> vtr[i];
        int count = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(vtr[i][j] == '-'){
                    dsf(i, j, n, m);
                    count++;
                }
            }
        }
        cout << "Case " << c++ << ": " << count << endl;
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
