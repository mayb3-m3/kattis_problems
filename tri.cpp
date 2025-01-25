#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>
#define pdd pair<double, double>

using namespace std;

void solve(){
    int a, b, c; cin >> a >> b >> c;
    cout << a;
    if(a+b == c) cout << "+" << b << "=";
    else if(a-b == c) cout << "-" << b << "=";
    else if(a*b == c) cout << "*" << b << "=";
    else if(a%b == 0 && a/b == c) cout << "/" << b << "=";
    else if(a == b+c) cout << "=" << b << "+";
    else if(a == b-c) cout << "=" << b << "-";
    else if(a == b*c) cout << "=" << b << "*";
    else cout << "=" << b << "/";
    cout << c;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
