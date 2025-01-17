#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>

using namespace std;

void solve(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int num; cin >> num;
        for(int j = 0; j <= 255; j++){
            if(((j ^ j << 1) & 255) == num){
                cout << j << " ";
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
