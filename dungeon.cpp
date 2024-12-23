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
    while(1){
        int l, r, c; cin >> l >> r >> c;
        if(l == 0 && r == 0 && c == 0)
            break;
        vector<vector<string>> v;
        vector<vector<vector<int>>> stat(l, vector<vector<int>>(r, vector<int>(c, imax)));

        for(int i = 0; i < l; i++){
            vector<string> vtr(r);
            for(int j = 0; j < r; j++)
                cin >> vtr[j];
            v.push_back(vtr);
        }

        int si, sj, sk, ei, ej, ek;
        for(int i = 0; i < l; i++){
            for(int j = 0; j < r; j++){
                for(int k = 0; k < c; k++){
                    if(v[i][j][k] == 'S')
                        si = i, sj = j, sk = k;
                    if(v[i][j][k] == 'E')
                        ei = i, ej = j, ek = k;
                }
            }
        }

        queue<vector<int>> que;
        que.push({si, sj, sk});
        v[ei][ej][ek] = '.';
        stat[si][sj][sk] = 0;
        while(!que.empty()){
            int i = que.front()[0];
            int j = que.front()[1];
            int k = que.front()[2];
            que.pop();
            int dist = stat[i][j][k] + 1;
            if(i+1 < l && v[i+1][j][k] == '.' && stat[i+1][j][k] == imax)
                que.push({i+1, j, k}), stat[i+1][j][k] = dist;
            if(j+1 < r && v[i][j+1][k] == '.' && stat[i][j+1][k] == imax)
                que.push({i, j+1, k}), stat[i][j+1][k] = dist;
            if(k+1 < c && v[i][j][k+1] == '.' && stat[i][j][k+1] == imax)
                que.push({i, j, k+1}), stat[i][j][k+1] = dist;
            if(i-1 >= 0 && v[i-1][j][k] == '.' && stat[i-1][j][k] == imax)
                que.push({i-1, j, k}), stat[i-1][j][k] = dist;
            if(j-1 >= 0 && v[i][j-1][k] == '.' && stat[i][j-1][k] == imax)
                que.push({i, j-1, k}), stat[i][j-1][k] = dist;
            if(k-1 >= 0 && v[i][j][k-1] == '.' && stat[i][j][k-1] == imax)
                que.push({i, j, k-1}), stat[i][j][k-1] = dist;
        }
        if(stat[ei][ej][ek] == imax)
            cout << "Trapped!\n";
        else
            cout << "Escaped in " << stat[ei][ej][ek] << " minute(s).\n" << endl;
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
