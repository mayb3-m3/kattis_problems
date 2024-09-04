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
#define rng_sorted(x,s,e) sort(x.begin()+s, x.begin()+e+1)
#define rsorted(x) sort(x.rbegin() , x.rend())
#define rng_rsorted(x,s,e) sort(x.rbegin()+s, x.rbegin()+e+1)
#define rev(x) reverse(x.begin(), x.end())
#define maxel(x) *max_element(x.begin(), x.end())
#define minel(x) *min_element(x.begin(), x.end())
#define maxeld(x) max_element(x.begin(), x.end())
#define mineld(x) min_element(x.begin(), x.end())
#define next_p(x) next_permutation(x.begin(), x.end())
#define _rand(x,y) min(x,y)+rand()%(abs(y-x)+1)
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pss pair<string, string>
#define psi pair<string, int>
#define pis pair<int, string>
#define umap unordered_map
#define uset unordered_set
#define ummap unordered_multimap
#define umset unordered_multiset
#define _mod 1000000007
#define _pie 3.141592653589793238
#define _e 2.718281828459045235

using namespace std;

void solve(){
    int n, v; cin >> n;
    deque<int> dq1, dq2;
    string str;
    for(int i = 0; i < n; i++){
        cin >> str >> v;
        if(str == "push_front"){
            dq1.puf(v);
            if(dq1.si()-2 == dq2.si())
                dq2.puf(dq1.back()), dq1.pob();
        }
        else if(str == "push_back"){
            dq2.pub(v);
            if(dq2.si()-1 == dq1.si())
                dq1.pub(dq2.front()), dq2.pof();
        }
        else if(str == "push_middle"){
            if(dq1.si() <= dq2.si())
                dq1.pub(v);
            else
                dq2.puf(v);
        }
        else{
            int l = dq1.si()-1;
            if(v <= l)
                cout << dq1[v] << endl;
            else
                cout << dq2[v-l-1] << endl;
        }
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
}
