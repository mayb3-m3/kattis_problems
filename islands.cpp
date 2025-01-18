#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>

using namespace std;

vector<int> vtr(13);
int cnt = 0;
void island(int i, int j){
    int mn = 1e9;
    for(int k = i; k <= j; k++)
        mn = min(mn, vtr[k]);
    if(mn > vtr[i-1] && mn > vtr[j+1])
        cnt++;
}

void solve(){
    int t; cin >> t;
    for(int c = 1; c <= t; c++){
        for(int j = 0; j <= 12; j++)
            cin >> vtr[j];

        for(int i = 1; i <= 12; i++)
            for(int j = i; j <= 12; j++)    
                island(i, j);
                
        cout << c << " " << cnt << endl;
        cnt = 0;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
