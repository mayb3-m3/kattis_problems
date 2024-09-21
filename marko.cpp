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
#define maxeld(x) mar_element(x.begin(), x.end())
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

void solve(){
    int n; cin >> n;
    umap<int, string> mpg;
    mpg[2] = "abc", mpg[3] = "def", mpg[4] = "ghi";
    mpg[5] = "jkl", mpg[6] = "mno", mpg[7] = "pqrs";
    mpg[8] = "tuv", mpg[9] = "wxyz";
    umap<string, int> words;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        words[str] = 1;
    }
    string str;
    cin >> str;
    int l = str.size();
    for(int i = 0; i < l; i++){
        uset<string> st;
        for(auto v : words){
            if(int(v.ff.size()) >= i+1){
                char ch = v.ff[i];
                int a = 0, b = str[i]-'0';
                for(char c : mpg[b])
                    if(c == ch)
                        a = 1;
                if(a == 0)
                    st.insert(v.ff);
            }
        }
        for(string str : st)
            words.erase(str);
    }
    cout << words.size() << endl;
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
