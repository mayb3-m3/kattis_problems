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
    vector<int> days{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<int> vtr;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        string str1, str2;
        cin >> str1 >> str2;
        int a, b, day; char ch;
        stringstream ss(str2);
        ss >> a >> ch >> b;
        day = b;
        for(int j = 0; j < a-1; j++)
            day += days[j];
        vtr.pub(day-1);
    }
    sorted(vtr);
    if(vtr[0] == 0)
        vtr[0] = 365;
    sorted(vtr);
    int prev = 0, mx1 = -1, ans, mx2, l = vtr.size();
    for(int i = 0; i < l; i++){
        int t1 = vtr[i] - prev, t2;
        prev = vtr[i];
        if(i == 0)
            t1 += 365-vtr[l-1];
        if(vtr[i] <= 300)
            t2 = 65 + vtr[i];
        else    
            t2 = vtr[i] - 300;
        if(t1 > mx1)
            ans = vtr[i], mx1 = t1, mx2 = t2;
        else if(t1 == mx1){
            if(t2 < mx2)
                ans = vtr[i], mx2 = t2;
        }
    }
    int m = 1;
    for(int i = 0; i < 12; i++){
        if(ans > days[i])
            m++, ans -= days[i]; 
        else
            break;
    }
    if(m <= 9)
        cout << "0";
    cout << m << "-";
    if(ans <= 9)
        cout << "0";
    cout << ans << endl;
}
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
}
