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
    vector<int> vtr{0, 9, 6, 24,29,22,24,3, 12,12,17,13,
                    7, 7, 4, 10,22,19,22,23,21,27,26,16,
                    23,26,8, 11,10,14,10,15,32,24,29,20,
                    26,26,20,25,25,18,18,21,16,28,25,26,
                    23,31,28,25,16,23,19,26,18,14,22,18,
                    10,18,7, 8, 3, 23,25,17,25,23,18,30,
                    21,15,20,21,16,22,18,20,25,25,13,21,
                    17,17,13,19,13,24,19,18,12,18,9};
    string str;
    while(getline(cin, str)){
        int sum = 0;
        for(char ch : str)
            sum += vtr[ch-32];
        cout << sum << endl;
    }

}
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
}
