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

int oppo(int n){
    vector<char> mapping{'0','1','2','3','4','5','9','7','8','6'};
    string temp = to_string(n);
    bool flag = 1;
    for(char &ch : temp){
        if(ch == '3' || ch == '4' || ch == '7'){
            flag = 0;
            break;
        }
        else
            ch = mapping[ch-'0'];
    }
    if(flag){
        rev(temp);
        return stoi(temp);
    }
    else
        return n;
}
void solve(){
    int a, b; cin >> a >> b;
    vector<int> vtr(a);
    for(int i = 0; i < a; i++)
        cin >> vtr[i];
    umap<int, int> mp;
    for(int i : vtr){
        int j = oppo(i);
        if(mp[i] || mp[j]){
            cout << "YES\n";
            return;
        }
        else
            mp[b-i] = 1, mp[b-j] = 1;
    }
    cout << "NO\n";
}
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
}
