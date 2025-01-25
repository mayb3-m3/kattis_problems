#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>
#define pdd pair<double, double>

using namespace std;

bool harshad(int n){
    int temp = n, sum = 0;
    while(n)
        sum += n%10, n /= 10;
    return temp % sum == 0;
}
void solve(){
    int n; cin >> n;
    while(!harshad(n))
        n++;
    cout << n << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
