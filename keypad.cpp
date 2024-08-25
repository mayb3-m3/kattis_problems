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

int func1(vector<string> vtr, int i, int j){
    int row = 0, col = 0;
    for(char ch : vtr[i])
        if(ch == '1')
            row++;
    for(string str : vtr)
        if(str[j] == '1')
            col++;
    if(row == 1 || col == 1)
        return 0;
    else
        return 1;
}
int func2(vector<string> vtr, int i, int j){
    int a = vtr.size(), b = vtr[0].size();
    int row = 0, col = 0;
    for(string str : vtr)
        if(str[j] == '0')
            row++;
    for(char ch : vtr[i])
        if(ch == '0')
            col++;
    if(row == a || col == b)
        return 0;
    else
        return 1;
}
void solve(){
    int t; cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        vector<string> vtr(a);
        for(int i = 0; i < a; i++)
            cin >> vtr[i];
        vector<string> cpy(vtr);
        int ans = 1;
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                if(vtr[i][j] == '0' && func2(vtr, i, j))
                    ans = 0;
                if(vtr[i][j] == '1' && func1(vtr, i, j))
                    cpy[i][j] = 'I';
            }
        }
        if(ans == 0)
            cout << "impossible\n";
        else{    
            for(string str : cpy){
                for(char ch : str){
                    if(ch == 'I')
                        cout << ch;
                    else if(ch == '1')
                        cout << 'P';
                    else
                        cout << 'N';
                }
                cout << endl;
            }
        }
        cout << "----------\n";
    }
}
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
}
