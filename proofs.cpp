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

void solve(){
    int n; cin >> n;
    cin.ignore();
    umap<string,int> mp;
    for(int i = 0; i < n; i++){
        string str, s;
        getline(cin,str);
        str += " ";
        vector<string> vtr;
        for(char ch : str){
            if(ch == ' ')
                vtr.pub(s), s = "";
            else
                s += ch;
        }
        int l = vtr.size();
        if(l == 2)
            mp[vtr[1]] = 1;
        else{
            for(int j = 0; j < l-2; j++){
                if(!mp[vtr[j]]){
                    cout << i+1 << endl;
                    return;
                }
            }
        }
        mp[vtr[l-1]] = 1;
    }
    cout << "correct\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
}
