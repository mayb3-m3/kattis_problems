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

void solve(){
    string str1, str2, str3, str4;
    umap<string, int> mp;
    while(cin >> str1 >> str2 >> str3){
        if(str1 == "eval"){
            cin >> str4;
            int t1 = mp.find(str2) != mp.end();
            int t2 = mp.find(str4) != mp.end();
            if(t1 && t2){
                if(str3 == "=")
                    cout << (mp[str2] == mp[str4] ? "true\n" : "false\n"); 
                if(str3 == ">")
                    cout << (mp[str2] > mp[str4] ? "true\n" : "false\n"); 
                if(str3 == "<")
                    cout << (mp[str2] < mp[str4] ? "true\n" : "false\n");
            }
            else
                cout << "undefined\n";
        }
        else
         mp[str3] = stoi(str2);   
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
