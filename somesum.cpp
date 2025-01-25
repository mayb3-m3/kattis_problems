#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>
#define pdd pair<double, double>

using namespace std;

void solve(){
    int n; cin >> n;
    if(n%2)
        cout << "Either\n";
    else if(n%4)
        cout << "Odd\n";
    else
        cout << "Even\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
