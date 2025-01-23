#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>
#define pdd pair<double, double>

using namespace std;

int func(int n){
    int sum = 0;
    while(n)
        sum += n%10, n /= 10;
    return sum;
}
void solve(){
    while(true){
        int n; cin >> n;
        if(n == 0)
            break;
        for(int i = 11; i <= 100; i++){
            if(func(n) == func(n*i)){
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
