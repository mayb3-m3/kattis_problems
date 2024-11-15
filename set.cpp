#include <bits/stdc++.h>

#define imax INT_MAX
#define llmax INT64_MAX
#define ll long long
#define sorted(x) sort(x.begin() , x.end())
#define rsorted(x) sort(x.rbegin() , x.rend())
#define nextp(x) next_permutation(x.begin(), x.end())
#define _rand(x,y) min(x,y)+rand()%(abs(y-x)+1)
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pss pair<string, string>
#define psi pair<string, int>
#define pis pair<int, string>
#define mod 1000000007
#define pie 3.141592653589793238
#define e_ 2.718281828459045235

using namespace std;

bool is_valid(string s1, string s2, string s3){
    for(int i = 0; i < 4; i++){
        unordered_set<char> st;
        st.insert({s1[i], s2[i], s3[i]});
        int l = st.size();
        if(l == 2)  
            return false;
    }
    return true;
}
void solve(){
    vector<string> vtr(12);
    for(int i = 0; i < 12; i++)
        cin >> vtr[i];
    int count = 0;
    set<set<int>> st;
    for(int i = 0; i < 12; i++)
        for(int j = 0; j < 12; j++)
            for(int k = 0; k < 12; k++)
                if(i != j && j != k && k != i)
                    if(is_valid(vtr[i], vtr[j], vtr[k]))
                        if(st.find(set<int>{i, j, k}) == st.end())
                            st.insert(set<int>{i, j, k}), count++,
                            cout << i+1 << " " << j+1 << " " << k+1 << endl;
    if(!count)
        cout << "no sets\n";
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
