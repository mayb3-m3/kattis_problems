#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>
#define pdd pair<double, double>

using namespace std;

void solve(){
    string s1, s2; cin >> s1 >> s2;
    int l1 = s1.size(), l2 = s2.size();
    int idx = 0, ans = true;
    for(int i = 0; i < l1; i++){
        bool success = false;
        for(int j = idx; j < l2; j++){
            if(s1[i] == s2[j]){
                idx = j+1;
                success = true;
                break;
            }else{
                for(int k = i; k < l1; k++)
                    if(s2[j] == s1[k])
                        ans = false;
            }
        }
        if(success == false)
            ans = false;
    }
    if(ans)
        cout << "PASS\n";
    else
        cout << "FAIL\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
