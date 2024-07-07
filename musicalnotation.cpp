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
    unordered_map<char,string> mp;
    int n;
    cin >> n;
    cin.ignore();
    string str;
    getline(cin, str);
    str += " ";
    vector<pair<char,int>> vtr;
    string s;
    int l = 0;
    for(char ch : str){
        if(ch == ' '){
            int a; char ch;
            if(s.size() == 1)
                vtr.pub(mkpr(s[0], 1)), l += 2;
            else{
                stringstream ss(s);
                ss >> ch >> a;
                vtr.pub(mkpr(ch,a));
                l += a+1;
            }
            s = "";
        }
        else
            s += ch;
    }
    string str1, str2;
    for(int i = 0; i < l-1; i++)
        str1 += " ", str2 += "-";
    s = "GFEDCBAgfedcba";
    for(char ch : s){
        if(ch=='F'||ch=='D'||ch=='B'||ch=='g'||ch=='e'||ch=='a')
            mp[ch] = string(1,ch) + ": " + str2;
        else
            mp[ch] = string(1,ch) + ": " + str1;
    }
    int index = 3;
    for(auto i : vtr){;
        while(i.ss--)
            mp[i.ff][index++] = '*';
        index++;
    }
    for(char ch : s)
        cout << mp[ch] << endl;
}
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
}
