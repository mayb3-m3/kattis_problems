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
    string str;
    cin >> str;
    int l = str.size();
    string s1 = "..#.", s2 = ".#.#", s3 = "..*.", s4 = ".*.*";
    for(int i = 0; i < l; i++){
        if((i+1) % 3 == 0) cout << s3;
        else cout << s1;
    } cout << ".\n";
    for(int i = 0; i < l; i++){
        if((i+1) % 3 == 0) cout << s4;
        else cout << s2;
    } cout << ".\n";
    for(int i = 0; i < l; i++){
        if(i == 0 || i == 1 || (i+1) % 3 == 2)
            cout << "#." << str[i] << ".";
        else if((i+1) % 3 == 0 || (i+1) % 3 == 1)
            cout << "*." << str[i] << ".";
    }(l % 3 == 0) ? cout << "*\n" : cout << "#\n";
    for(int i = 0; i < l; i++){
        if((i+1) % 3 == 0) cout << s4;
        else cout << s2;
    } cout << ".\n";
    for(int i = 0; i < l; i++){
        if((i+1) % 3 == 0) cout << s3;
        else cout << s1;
    } cout << ".\n";
}
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
}
