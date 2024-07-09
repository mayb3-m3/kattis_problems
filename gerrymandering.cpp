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
#define nsorted(x,n) sort(x.begin(), x.begin()+n)
#define rsorted(x) sort(x.rbegin() , x.rend())
#define nrsorted(x,n) sort(x.rbegin() , x.rbegin()+n)
#define rev(x) reverse(x.begin(), x.end())
#define maxel(x) *max_element(x.begin(), x.end())
#define minel(x) *min_element(x.begin(), x.end())
#define maxell(x) max_element(x.begin(), x.end())
#define minell(x) min_element(x.begin(), x.end())
#define next_p(x) next_permutation(x.begin(), x.end())
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pss pair<string, string>
#define psi pair<string, int>
#define pis pair<int, string>
#define mod 1000000007
#define pie 3.141592653589793238
#define e_ 2.718281828459045235 

using namespace std;

void solve()
{
    ll p, d;
    cin >> p >> d;
    map<ll,pll> mp;
    ll sum = 0;
    for(int i = 0; i < p; i++){
        int c, a, b;
        cin >> c >> a >> b;
        mp[c].ff += a, mp[c].ss += b;
        sum += a+b;
    }
    ll diff = 0;
    for(auto i : mp){
        if(i.ss.ff > i.ss.ss){
            int t = (i.ss.ff + i.ss.ss)/2+1;
            cout << "A " << i.ss.ff-t << " " << i.ss.ss << endl;
            diff += i.ss.ff-t-i.ss.ss;
        }
        else{
            int t = (i.ss.ff + i.ss.ss)/2+1;
            cout << "B " << i.ss.ff << " " << i.ss.ss-t << endl;
            diff += i.ss.ff-i.ss.ss+t;
        }
    }
    cout << fixed << stpr(10) << abs(diff)/(ld)sum << endl;
}
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
}
