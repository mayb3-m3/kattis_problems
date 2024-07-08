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
    map<char, string> mp;
    mp['0'] = "xxxxxx...xx...xx...xx...xx...xxxxxx";
    mp['1'] = "....x....x....x....x....x....x....x";
    mp['2'] = "xxxxx....x....xxxxxxx....x....xxxxx";
    mp['3'] = "xxxxx....x....xxxxxx....x....xxxxxx";
    mp['4'] = "x...xx...xx...xxxxxx....x....x....x";
    mp['5'] = "xxxxxx....x....xxxxx....x....xxxxxx";
    mp['6'] = "xxxxxx....x....xxxxxx...xx...xxxxxx";
    mp['7'] = "xxxxx....x....x....x....x....x....x";
    mp['8'] = "xxxxxx...xx...xxxxxxx...xx...xxxxxx";
    mp['9'] = "xxxxxx...xx...xxxxxx....x....xxxxxx";
    mp['+'] = ".......x....x..xxxxx..x....x.......";
    map<string, char> rmp;
    for(auto i : mp)
        rmp[i.ss] = i.ff;
    vector<string> vtr;
    for(int i = 0; i < 7; i++){
        string str;
        cin >> str;
        int l = (str.size()+1)/6;
        vtr.resize(l);
        int n = 0;
        for(int i = 0; i < l; i++){
            vtr[i] += str.substr(n,5);
            n += 6;
        }
    }
    string s;
    for(string str : vtr)
        s += string(1,rmp[str]);
    int l = s.size(), pos = 0;
    for(int i = 0; i < l; i++)
        if(s[i] == '+')
            pos = i, i = imax-5;
    string s1 = "0"+s.substr(0,pos+1), s2 = "0"+s.substr(pos+1,l-pos-1);
    int n1 = stoi(s1)+stoi(s2);
    string str = to_string(n1);
    l = str.size(); 
    int start = 0;
    for(int i = 0; i < 7; i++){
        for(int i = 0; i < l; i++){
            cout << mp[str[i]].substr(start,5);
            if(i != l-1)
                cout << '.';
        }
        start += 5;
        cout << endl;
    }
}
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
}
