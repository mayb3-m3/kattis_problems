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
    map<string, ld> mp;
    mp["UTC"] = 0, mp["GMT"] = 0, mp["BST"] = 1, mp["IST"] = 1;
    mp["WET"] = 0, mp["WEST"] = 1, mp["CET"] = 1, mp["CEST"] = 2;
    mp["EET"] = 2, mp["EEST"] = 3, mp["MSK"] = 3, mp["MSD"] = 4;
    mp["AST"] = -4, mp["ADT"] = -3, mp["NST"] = -3.5, mp["NDT"] = -2.5;
    mp["EST"] = -5, mp["EDT"] = -4, mp["CST"] = -6, mp["CDT"] = -5;
    mp["MST"] = -7, mp["MDT"] = -6, mp["PST"] = -8, mp["PDT"] = -7;
    mp["HST"] = -10, mp["AKST"] = -9, mp["AKDT"] = -8, mp["AEST"] = 10;
    mp["AEDT"] = 11, mp["ACST"] = 9.5, mp["ACDT"] = 10.5, mp["AWST"] = 8;
    int n; cin >> n;
    cin.ignore();
    while(n--){
        string str;
        getline(cin, str);
        //input string parsing
        vector<string> vtr;
        string s;
        for(char ch : str){
            if(ch == ' ')
                vtr.pub(s), s = "";
            else    
                s += ch;
        }
        vtr.pub(s);
        string str1, str2, str3;
        pii tm;
        if(vtr[0] == "noon")
            tm = mkpr(12,0), str1 = "p.m.";
        else if(vtr[0] == "midnight")
            tm = mkpr(12,0), str1 = "a.m.";
        else{
            int a, b; char ch;
            stringstream ss(vtr[0]);
            ss >> a >> ch >> b;
            tm = mkpr(a,b);
        }
        if(vtr.size() == 3)
            str2 = vtr[1], str3 = vtr[2];
        else
            str1 = vtr[1], str2 = vtr[2], str3 = vtr[3];
        ld ans = mp[str3] - mp[str2];
        int ana = ans;
        //convet from 12 to 24 hour format
        if(tm.ff == 12 && str1 == "a.m.")
            tm.ff = 0;
        if(tm.ff != 12 && str1 == "p.m.")
            tm.ff += 12;
        tm.ff += ana;
        //handle adding or subtructing 30 minutes
        if(ans != ana){
            if(ans < 0){
                if(tm.ss < 30)
                    tm.ff--, tm.ss = 60 - (30-tm.ss);
                else    
                    tm.ss -= 30;
            }
            else{
                if(tm.ss >= 30)
                    tm.ff++, tm.ss -= 30;
                else
                    tm.ss += 30;
            }
        }
        //correcting 24 hour format
        if(tm.ff >= 24)
            tm.ff -= 24;
        if(tm.ff < 0)
            tm.ff = 24+tm.ff;
        //deciding am or pm
        tm.ff >= 12 ? str1 = "p.m." : str1 = "a.m.";
        //convert 24 to 12 hour format
        if(tm.ff == 0)
            tm.ff = 12;
        if(tm.ff >= 13)
            tm.ff -= 12;
        //output formatting
        if(tm.ff == 12 && tm.ss == 0 && str1 == "a.m.")
            cout << "midnight\n";
        else if(tm.ff == 12 && tm.ss == 0 && str1 == "p.m.")
            cout << "noon\n";
        else{
            cout << tm.ff << ":";
            if(tm.ss <= 9)  
                cout << "0";
            cout << tm.ss << " " << str1 << endl;
        }
    }
}
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
}
