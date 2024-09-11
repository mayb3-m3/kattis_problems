#include <bits/stdc++.h>

#define imax INT_MAX
#define llmax INT64_MAX
#define ld long double
#define ll long long
#define lll __int128_t
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
#define pque priority_queue
#define umap unordered_map
#define uset unordered_set
#define ummap unordered_multimap
#define umset unordered_multiset
#define _mod 1000000007
#define _pie 3.141592653589793238
#define _e 2.718281828459045235

using namespace std;

bool is_prime(int n)
{
    if(n == 0 || n == 1)
        return false ;
    if(n == 2)
        return true ;
    for(int i = 2 ; i*i <= n ; i++)
        if(n % i == 0)
            return false ;
    return true ;
}

void solve(){
    int n; cin >> n;
    if(n == 1){
        cout << 0 << endl;
        return;
    }
    if(is_prime(n)){
        cout << n-1 << endl;
        return;
    }
    int ans = 0;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            ans = n/i;
            break;
        }
    }
    cout << n-ans << endl;
}
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
}
