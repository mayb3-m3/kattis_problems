#include <bits/stdc++.h>

#define imax INT_MAX
#define llmax INT64_MAX
#define ld long double
#define ll long long
#define ull unsigned long long
#define pub push_back
#define puf push_front
#define pob pop_back
#define pof pop_front
#define ff first
#define ss second
#define si size
#define bc back
#define ft front
#define mkpr make_pair
#define stpr(x) setprecision(x)
#define set(n,x) n |= (1 << x)
#define unset(n,x) n &= ~(1 << x)
#define flip(n,x) n ^= (1 << x)
#define check(n, x) (n & (1 << x)) != 0
#define sorted(x) sort(x.begin() , x.end())
#define rsorted(x) sort(x.rbegin() , x.rend())
#define rev(x) reverse(x.begin(), x.end())
#define maxel(x) *max_element(x.begin(), x.end())
#define minel(x) *min_element(x.begin(), x.end())
#define maxeld(x) max_element(x.begin(), x.end())
#define mineld(x) min_element(x.begin(), x.end())
#define nextp(x) next_permutation(x.begin(), x.end())
#define _rand(x,y) min(x,y)+rand()%(abs(y-x)+1)
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pss pair<string, string>
#define psi pair<string, int>
#define pis pair<int, string>
#define pque priority_queue
#define umap unordered_map
#define uset unordered_set
#define ummap unordered_multimap
#define umset unordered_multiset
#define _mod 1000000007
#define _pie 3.141592653589793238
#define _e 2.718281828459045235

using namespace std;


void solve(){
    int a, b;
    cin >> a >> b;
    umap<int, int> mp;
    vector<pii> vtr;
    for(int i = 0; i < a; i++){
        int t; cin >> t;
        if(mp[t]){
            for(auto &pr : vtr){
                if(t == pr.ff){
                    pr.ss++;
                    break;
                }
            }
        }
        else
            vtr.pub({t, 1});
        mp[t] = 1;
    }
    int n = vtr.size();
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1; j++){
            if(vtr[j].ss < vtr[j+1].ss)
                swap(vtr[j], vtr[j+1]);
        }
    }
    for(auto &i : vtr)
        while(i.ss--)
            cout << i.ff << " ";
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
