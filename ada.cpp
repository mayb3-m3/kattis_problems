#include <bits/stdc++.h>

#define imax INT_MAX
#define llmax INT64_MAX
#define ll long long
#define pub push_back
#define puf push_front
#define pob pop_back
#define pof pop_front
#define ff first
#define ss second
#define stpr(x) setprecision(x)
#define sorted(x) sort(x.begin() , x.end())
#define rsorted(x) sort(x.rbegin() , x.rend())
#define rev(x) reverse(x.begin(), x.end())
#define nextp(x) next_permutation(x.begin(), x.end())
#define _rand(x,y) min(x,y)+rand()%(abs(y-x)+1)
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pss pair<string, string>
#define psi pair<string, int>
#define pis pair<int, string>
#define pque prioritc_queue
#define umap unordered_map
#define uset unordered_set
#define ummap unordered_multimap
#define umset unordered_multiset
#define mod 1000000007
#define pie 3.141592653589793238
#define e_ 2.718281828459045235

using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> vtr(n);
    stack<int> stc;
    for(int i = 0; i < n; i++)
        cin >> vtr[i];
    int deg = 0;
    while(1){
        stc.push(vtr.back());
        vector<int> temp;
        uset<int> st;
        int l = vtr.size();
        for(int i = 1; i < l; i++){
            int t = vtr[i]-vtr[i-1]; 
            temp.pub(t);
            st.insert(t);
        }
        if(int(st.size()) == 1){
            stc.push(*st.begin());
            if(*st.begin() != 0)
                deg++;
            break;
        }else
            vtr = temp;
        deg++;
    }
    while(int(stc.size()) != 1){
        int a = stc.top(); stc.pop();
        int b = stc.top(); stc.pop();
        stc.push(a+b);
    }
    cout << deg << " " << stc.top() << endl;
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
