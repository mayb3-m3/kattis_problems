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
    while(n--){
        vector<int> vtr(10);
        string s, s1, s2;
        getline(cin, s);
        cin >> s1 >> s2;
        int t = stoi(s1), count = 0;
        while(t){
            string str; cin >> str;
            cin.ignore();
            if(str == "+"){
                int a, b, c;
                cin >> a >> b >> c;
                cin.ignore();
                for(int i = a; i <= b; i += c){
                    string str = to_string(i);
                    for(char ch : str)
                        vtr[ch-'0']++, count++;
                    t--;
                }
            }
            else{
                for(char ch : str)
                    vtr[ch-'0']++, count++;
                t--;
            }
        }
        cout << s << endl;
        cout << s1 << " " << s2 << endl;
        for(int i = 0; i < 10; i++)
            cout << "Make " << vtr[i] << " digit " << i << endl;
        if(count == 1)
            cout << "In total " << count << " digit\n";
        else
            cout << "In total " << count << " digits\n";
    }
}
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
}
