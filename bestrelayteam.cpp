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
    int n; cin >> n;
    vector<string> names(n);
    vector<double> first(n), other(n);
    for(int i = 0; i < n; i++)
        cin >> names[i] >> first[i] >> other[i];

    string one, two, three, four;
    double mn_time = 1e9;

    for(int i = 0; i < n; i++){
        double tot = first[i];
        vector<pds> vtr;
        for(int j = 0; j < n; j++)
            if(i != j)
                vtr.push_back({other[j], names[j]});
        
        sort(vtr.begin(), vtr.end());
        tot += vtr[0].first + vtr[1].first + vtr[2].first;

        if(tot < mn_time){
            one = names[i];
            two = vtr[0].second;
            three = vtr[1].second;
            four = vtr[2].second;
            mn_time = tot;
        }
    }
    cout << mn_time << endl;
    cout << one << endl << two << endl;
    cout << three << endl << four << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
