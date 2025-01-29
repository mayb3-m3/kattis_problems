#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>
#define pdd pair<double, double>
#define vi vector<int>
#define vvi vector<vi>
#define ll long long

using namespace std;

vector<int> parse(string str){
    stringstream ss(str);
    vector<int> ans;
    int num;
    while(ss >> num)
        ans.push_back(num);
    return ans;
}

void solve(){
    string str;
    while(getline(cin, str)){
        vector<int> v = parse(str);
        sort(v.begin(), v.end());
        int n1 = v.size(), n2 = v.back();

        vector<int> friq(n2+1), ans;
        for(int i = 0; i < n1-1; i++)
            for(int j = i+1; j < n1; j++)
                friq[v[j]-v[i]]++;

        bool dup = false;
        for(int i = 1; i <= n2; i++){
            if(friq[i] == 0)
                ans.push_back(i);
            if(friq[i] >= 2){
                dup = true;
                break;
            }
        }

        
        if(dup)
            cout << "not a ruler\n";
        else{
            if(ans.empty())
                cout << "perfect\n";
            else{
                cout << "missing ";
                for(int i : ans)
                    cout << i << " ";
                cout << endl;
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
