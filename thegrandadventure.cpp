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
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        stack<char> stc;
        bool ans = 1;
        for(char ch : str){
            if(ch == '$' || ch == '|' || ch == '*')
                stc.push(ch);
            if(ch == 'b'){
                if(!stc.empty() && stc.top() == '$')
                    stc.pop();
                else    
                    ans = 0;
            }
            if(ch == 't'){
                if(!stc.empty() && stc.top() == '|')
                    stc.pop();
                else    
                    ans = 0;
            }
            if(ch == 'j'){
                if(!stc.empty() && stc.top() == '*')
                    stc.pop();
                else    
                    ans = 0;
            }
        }
        if(stc.empty() && ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
}
