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
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> vtr(a);
    for(int i = 0; i < a; i++)
        cin >> vtr[i];
    for(int i = 1; i < a-1; i++){
        if(vtr[i] > vtr[i-1] && vtr[i] > vtr[i+1])
            vtr[i] = imax;
        if(vtr[i] < vtr[i-1] && vtr[i] < vtr[i+1])
            vtr[i] = -imax;
    }
    vector<int> ans;
    int count = 1;
    for(int i : vtr){
        if(i != imax && i != -imax)
            count++;
        else
            ans.pub(count), ans.pub(i), count = 2;
    }
    ans.pub(count-1);
    int count1 = 0, count2 = 0;
    for(int i = 1; i < int(ans.size())-1; i++){
        if(ans[i] == imax && ans[i-1] >= b && ans[i+1] >= b)
            count1++;
        if(ans[i] == -imax && ans[i-1] >= c && ans[i+1] >= c)
            count2++;
    }
    cout << count1 << " " << count2 << endl;
}
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
}
