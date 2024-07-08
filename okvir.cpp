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
#define mod 1000000007
#define pie 3.141592653589793238
#define e_ 2.718281828459045235 

using namespace std;

void solve()
{
    int m, n, l, r, u, d;
    cin >> m >> n >> u >> l >> r >> d;
    int c = n+l+r;
    vector<string> vtr;
    for(int i = 0; i < u; i++)
        vtr.pub(string(c, '#'));
    for(int i = 0; i < m; i++){
        string str;
        cin >> str;
        vtr.pub(string(l, '#') + str + string(r, '#'));
    }
    for(int i = 0; i < d; i++)
        vtr.pub(string(c, '#'));
    for(int i = 0; i < m+u+d; i++)
        for(int j = 0; j < c; j++)
            if(vtr[i][j] == '#' && (i+j)%2)
                vtr[i][j] = '.';
    for(string str : vtr)
        cout << str << endl;
}
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
}
