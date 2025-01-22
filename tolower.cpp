#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>
#define pdd pair<double, double>

using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    int cnt = 0;
    for(int i = 0; i <  n; i++){
        bool ans = true;
        for(int j = 0; j < m; j++){
            string s; cin >> s;
            int t = 0;
            for(char ch : s)
                if(isupper(ch))
                    t++;
            if((isupper(s[0]) && t == 1) || t == 0){

            }else
                ans = false;
        }
        if(ans)
            cnt++;
    }
    cout << cnt << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
