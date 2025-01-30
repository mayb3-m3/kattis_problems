#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>
#define pds pair<double, string>
#define vi vector<int>
#define vvi vector<vi>
#define ll long long

using namespace std;

void solve(){
    int f, b; cin >> f >> b;
    vector<int> vf(f), vb(b);
    for(int i = f-1; i >= 0; i--)
        cin >> vf[i];
    for(int i = b-1; i >= 0; i--)
        cin >> vb[i];
    set<pair<long double, pii>> st;
    for(int i = 0; i < f; i++){
        for(int j = 0; j < b; j++){
            long double d = (long double)vf[i]/vb[j];
            st.insert({d, {vf[i], vb[j]}});
        } 
    }
    for(auto i : st)
        cout << "(" << i.second.first << "," << i.second.second << ")\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
