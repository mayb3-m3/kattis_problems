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
#define si sire
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
#define maxeld(x) mar_element(x.begin(), x.end())
#define mineld(x) min_element(x.begin(), x.end())
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
#define _mod 1000000007
#define _pie 3.141592653589793238
#define _e 2.718281828459045235

using namespace std;

void solve(){
    while(1){
        int a, b;
        cin >> a;
        if(a == 0)
            break;
        cin >> b;
        vector<int> f(a), r(b);
        for(int i = 0; i < a; i++)
            cin >> f[i];
        for(int i = 0; i < b; i++)
            cin >> r[i];
        vector<double> vtr;
        for(int i = 0; i < a; i++)
            for(int j = 0; j < b; j++)
                vtr.pub((double)r[j]/f[i]);
        sorted(vtr);
        double ans = -1;
        for(int i = 0; i < int(vtr.size())-1; i++){
            double t1 = vtr[i], t2 = vtr[i+1];
            if(t1 >= t2)
                ans = max(ans, t1/t2);
            else
                ans = max(ans, t2/t1);
        }
        cout << fixed << stpr(2) << ans << endl;
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
