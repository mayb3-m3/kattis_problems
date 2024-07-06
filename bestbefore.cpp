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
int days(int y, int m){
    vector<int> days{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int t = ((y % 4 == 0) && ((y % 100 == 0) ? (y % 400 == 0 ? 1 : 0) : 1));
    if(t)
        days[1] = 29;
    return days[m-1];
}
void solve()
{
    string str;
    cin >> str;
    int a, b, c; char ch1, ch2;
    stringstream ss(str);
    ss >> a >> ch1 >> b >> ch2 >> c;
    vector<int> vtr{a,b,c};
    sorted(vtr);
    a = vtr[0], b = vtr[1], c = vtr[2];
    vector<vector<int>> ans(6, vector<int>(3));
    ans[0] = {a,b,c};
    ans[1] = {a,c,b};
    ans[2] = {b,a,c};
    ans[3] = {b,c,a};
    ans[4] = {c,a,b};
    ans[5] = {c,b,a};
    for(auto &i : ans)
        if(i[0] < 2000)
            i[0] += 2000;
    int y = imax, m = imax, d = imax;
    for(int i = 0; i < 6; i++){
        int t1 = ans[i][0];
        int t2 = ans[i][1];
        int t3 = ans[i][2];
        if(t1 >= 2000 && t2 >= 1 && t2 <= 12 && t3 >= 1 && t3 <= days(t1,t2)){
            y = t1, m = t2, d = t3;
            break;
        }
    }
    if(y == imax)
        cout << str << " is illegal\n";
    else{
        cout << y << "-";
        if(m <= 9)
            cout << "0";
        cout << m << "-";
        if(d <= 9)
            cout << "0";
        cout << d << endl;
    }
}
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
}
