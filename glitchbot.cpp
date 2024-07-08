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

pii calc(vector<string> vtr){
    int x = 0, y = 0;
    int val = 1; char dir = 'y';
    for(string str : vtr){
        if(str == "Forward")
            dir == 'y' ? y += val : x += val;
        else if(str == "Right"){
            if(dir == 'x' && val == 1) dir = 'y', val = -1;
            else if(dir == 'x' && val == -1) dir = 'y', val = 1;
            else if(dir == 'y' && val == 1) dir = 'x', val = 1;
            else dir = 'x', val = -1;
        }
        else{
            if(dir == 'x' && val == 1) dir = 'y', val = 1;
            else if(dir == 'x' && val == -1) dir = 'y', val = -1;
            else if(dir == 'y' && val == 1) dir = 'x', val = -1;
            else dir = 'x', val = 1;
        }
    }
    return mkpr(x,y);
}
void solve()
{
    int x,y;
    cin >> x >> y;
    int n; cin >> n;
    vector<string> vtr(n);
    for(int i = 0; i < n; i++)
        cin >> vtr[i];
    for(int i = 0; i < n; i++){
        vector<string> vtr1(vtr), vtr2(vtr);
        if(vtr[i] == "Forward")
            vtr1[i] = "Right", vtr2[i] = "Left";
        else if(vtr[i] == "Right")
            vtr1[i] = "Forward", vtr2[i] = "Left";
        else
            vtr1[i] = "Right", vtr2[i] = "Forward";
        string str1 = vtr1[i], str2 = vtr2[i];
        pii c1 = calc(vtr1), c2 = calc(vtr2);
        if(c1.ff == x && c1.ss == y){
            cout << i+1 << " " << str1;
            break;
        }
        if(c2.ff == x && c2.ss == y){
            cout << i+1 << " " << str2;
            break;
        }
    }
}
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
}
