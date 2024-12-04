#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    unordered_map<string, int> mp;
    mp["000"] = 0;
    mp["001"] = 1;
    mp["010"] = 2;
    mp["011"] = 3;
    mp["100"] = 4;
    mp["101"] = 5;
    mp["110"] = 6;
    mp["111"] = 7;
    string str; cin >> str;
    int n = str.size();
    if(n%3 == 1)
        str = "00" + str;
    if(n%3 == 2)
        str = "0" + str;
    for(int i = 0; i < n; i += 3)
        cout << mp[str.substr(i, 3)];
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
