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
#define rng_sorted(x,s,e) sort(x.begin()+s, x.begin()+e+1)
#define rsorted(x) sort(x.rbegin() , x.rend())
#define rng_rsorted(x,s,e) sort(x.rbegin()+s, x.rbegin()+e+1)
#define rev(x) reverse(x.begin(), x.end())
#define maxel(x) *max_element(x.begin(), x.end())
#define minel(x) *min_element(x.begin(), x.end())
#define maxeld(x) max_element(x.begin(), x.end())
#define mineld(x) min_element(x.begin(), x.end())
#define next_p(x) next_permutation(x.begin(), x.end())
#define _rand(x,y) min(x,y)+rand()%(abs(y-x)+1)
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pss pair<string, string>
#define psi pair<string, int>
#define pis pair<int, string>
#define umap unordered_map
#define uset unordered_set
#define ummap unordered_multimap
#define umset unordered_multiset
#define _mod 1000000007
#define _pie 3.141592653589793238
#define _e 2.718281828459045235

using namespace std;

void tokened(string str, vector<string> &vtr){
    string s;
    for(char ch : str){
        if(ch == ' ')
            vtr.pub(s), s.clear();
        else
            s += ch;
    }
    vtr.pub(s);
}
void solve(){
    string str;
    getline(cin, str);
    vector<string> attri;
    tokened(str, attri);
    vector<vector<string>> vtr;
    int n1; cin >> n1;
    cin.ignore();
    for(int i = 0; i < n1; i++){
        string t;
        getline(cin, t);
        vector<string> temp;
        tokened(t, temp);
        vtr.pub(temp);
    }
    int n2; cin >> n2;
    cin.ignore();
    for(int i = 0; i < n2; i++){
        string s;
        cin >> s;
        int t = 0;
        for(string str : attri){
            if(str == s)
                break;
            else    
                t++;
        }
        vector<string> ans;
        for(auto v : vtr)
            ans.pub(v[t]);
        for(int i = 0; i < n1-1; i++){
            for(int j = 0; j < n1-1; j++){
                if(vtr[j][t] > vtr[j+1][t])
                    swap(vtr[j], vtr[j+1]);
            }
        }
        cout << str << endl;
        for(auto x : vtr){
            for(string str : x)
                cout << str << " ";
            cout << endl;
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
