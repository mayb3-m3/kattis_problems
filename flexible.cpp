#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>

using namespace std;

void solve(){
    int w, p; cin >> w >> p;
    vector<int> vtr(p+1, 0);
    for(int i = 1; i <= p; i++)
        cin >> vtr[i];
    vtr.push_back(w);
    set<int> st;
    for(int i = 0; i <= p; i++)
        for(int j = i+1; j <= p+1; j++)
            st.insert(vtr[j]-vtr[i]);
    for(int i : st)
        cout << i << " ";
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
