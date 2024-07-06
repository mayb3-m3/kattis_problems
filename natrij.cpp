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
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mod 1000000007
#define pie 3.141592653589793238
#define e_ 2.718281828459045235 

using namespace std;

void solve()
{
    string str1, str2;
    cin >> str1 >> str2;
    int h1, m1, s1, h2, m2, s2;
    char ch1, ch2;
    stringstream ss1(str1), ss2(str2);
    ss1 >> h1 >> ch1 >> m1 >> ch2 >> s1;
    ss2 >> h2 >> ch1 >> m2 >> ch2 >> s2;
    int tot1 = h1*3600 + m1*60 + s1;
    int tot2 = h2*3600 + m2*60 + s2, ans;
    if(tot1 >= tot2)
        ans = 86400 - tot1 + tot2;
    else    
        ans = tot2 - tot1;
    int h = ans/3600; ans -= h * 3600;
    int m = ans/60, s = ans % 60;
    if(h <= 9)
        cout << "0";
    cout << h << ":";
    if(m <= 9)
        cout << "0";
    cout << m << ":";
    if(s <= 9)
        cout << "0";
    cout << s << endl;
}
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
}
