#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>
#define pdd pair<double, double>

using namespace std;

vector<pdd> vtr, centers;

double dist(pdd p1, pdd p2){
    double dx = p1.first-p2.first;
    double dy = p1.second-p2.second;
    return sqrt(dx*dx + dy*dy);
}

int is_valid(int i, int j, int k, int l, int r){
    unordered_set<int> st;
    vector<pdd> temp{vtr[i], vtr[j], vtr[k], vtr[l]};

    for(auto p : temp)
        for(int idx = 0; idx < 4; idx++)
            if(dist(p, centers[idx]) <= r)
                st.insert(idx);

    if(st.size() == 4)
        return unordered_set<int>({i, j, k, l}).size();
    return 0;
}

void solve(){
    double l, w, n, r;
    cin >> l >> w >> n >> r; 

    centers.push_back({l/2, 0});
    centers.push_back({-l/2, 0});
    centers.push_back({0, w/2});
    centers.push_back({0, -w/2});

    vtr.assign(n, {});
    for(int i = 0; i < n; i++)
        cin >> vtr[i].first >> vtr[i].second;

    int ans = 5;
    for(int i = 0; i < n; i++)
        for(int j = i; j < n; j++)
            for(int k = j; k < n; k++)
                for(int l = k; l < n; l++)
                    if(is_valid(i, j, k, l, r))
                        ans = min(ans, is_valid(i, j, k, l, r));
    
    if(ans <= 4)
        cout << ans << endl;
    else
        cout << "Impossible\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
