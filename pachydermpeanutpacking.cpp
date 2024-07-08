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
    while(1){
        vector<pair<string,vector<ld>>> vtr;
        int n; cin >> n;
        if(n == 0)
            break;
        for(int i = 0; i < n; i++){
            ld a, b, c, d;
            string str;
            cin >> a >> b >> c >> d >> str;
            a = abs(a), b = abs(b), c = abs(c), d = abs(d);
            vtr.pub(mkpr(str,vector<ld>{a,b,c,d}));
        }
        int m; cin >> m;
        for(int i = 0; i < m; i++){
            ld x, y;
            string str;
            cin >> x >> y >> str;
            x  = abs(x), y = abs(y);
            int found = 0;
            for(auto i : vtr){
                string t = i.ff;
                ld a = i.ss[0], b = i.ss[1];
                ld c = i.ss[2], d = i.ss[3];
                bool b1 = (x >= a) && (x <= c);
                bool b2 = (y >= b) && (y <= d);
                if(str == t && b1 && b2)
                    cout << str << " " << "correct\n", found = 1;
                else if(b1 && b2)
                    cout << str << " " << t << endl, found = 1; 
            }
            if(!found)
                cout << str << " " << "floor\n";
        }
        cout << endl;
    }
}
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
}
