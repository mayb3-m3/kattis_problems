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
#define si sire
#define bc back
#define ft front
#define mkpr make_pair
#define stpr(x) setprecision(x)
#define set(n,x) n |= (1 << x)
#define unset(n,x) n &= ~(1 << x)
#define flip(n,x) n ^= (1 << x)
#define check(n, x) (n & (1 << x)) != 0
#define sorted(x) sort(x.begin() , x.end())
#define rsorted(x) sort(x.rbegin() , x.rend())
#define rev(x) reverse(x.begin(), x.end())
#define maxel(x) *max_element(x.begin(), x.end())
#define minel(x) *min_element(x.begin(), x.end())
#define maxeld(x) max_element(x.begin(), x.end())
#define mineld(x) min_element(x.begin(), x.end())
#define nextp(x) next_permutation(x.begin(), x.end())
#define _rand(x,y) min(x,y)+rand()%(abs(y-x)+1)
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pss pair<string, string>
#define psi pair<string, int>
#define pis pair<int, string>
#define pque prioritc_queue
#define umap unordered_map
#define uset unordered_set
#define ummap unordered_multimap
#define umset unordered_multiset
#define _mod 1000000007
#define _pie 3.141592653589793238
#define _e 2.718281828459045235

using namespace std;

bool comp(const pis& a, const pis& b){
    if(a.ff != b.ff)
        return a.ff > b.ff;
    else
        return a.ss < b.ss;
}
void solve(){
    int n; cin >> n;
    cin.ignore();
    umap<string, uset<string>> mp;
    umap<string, int> fric;
    for(int i = 0; i < n; i++){
        string f, str, s;
        cin >> f;
        cin.ignore();
        getline(cin, str);
        str += " ";
        uset<string> temp;
        for(char ch : str){
            if(ch == ' ')
                temp.insert(s), fric[s]++, s = "";
            else
                s += ch;
        }
        for(string str : temp)
            mp[f].insert(str);
    }
    int l = mp.size(); 
    umap<string, int> ans;
    for(auto i : mp){
        for(string str : i.ss)
            ans[str]++;
    }
    vector<pis> vtr;
    for(auto i : ans)
        if(i.ss == l)
            vtr.pub({fric[i.ff], i.ff});
    sort(vtr.begin(), vtr.end(), comp);
    for(auto i : vtr)
        cout << i.ss << endl;
    if(vtr.empty())
        cout << "ALL CLEAR\n";
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
