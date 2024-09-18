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

ll ans = 0;
void func2(vector<ll> &vtr, int l, int m, int r){
    int n1 = m-l+1, n2 = r-m;
    vector<ll> vtr1(n1+1), vtr2(n2+1);
    vtr1[n1] = llmax, vtr2[n2] = llmax;
    for(int i = 0; i < n1; i++)
        vtr1[i] = vtr[l+i];
    for(int i = 0; i < n2; i++)
        vtr2[i] = vtr[m+1+i];
    int i = 0, j = 0, rem = n1;
    for(int k = l; k <= r; k++){
        if(vtr1[i] <= vtr2[j])
            vtr[k] = vtr1[i++], rem--;
        else
            ans += rem, vtr[k] = vtr2[j++];
    }
}
void func1(vector<ll>& vtr, int l, int r){
    if(r > l){
        ll m = (l+r)/2;
        func1(vtr, l, m);
        func1(vtr, m+1, r);
        func2(vtr, l, m, r);
    }
}
void solve(){
    int n; cin >> n;
    vector<ll> vtr(n);
    for(int i = 0; i < n; i++)
        cin >> vtr[i];
    func1(vtr, 0, n-1);
    cout << ans;
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
