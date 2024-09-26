#include <bits/stdc++.h>

#define imax INT_MAX
#define llmax INT64_MAX
#define ld long double
#define ll long long
#define pub push_back
#define puf push_front
#define pob pop_back
#define pof pop_front
#define ff first
#define ss second
#define stpr(x) setprecision(x)
#define sorted(x) sort(x.begin() , x.end())
#define rsorted(x) sort(x.rbegin() , x.rend())
#define rev(x) reverse(x.begin(), x.end())
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
    while(1){
        string str1, str2;
        cin >> str1 >> str2;
        if(str1 == "0" && str2 == "0")
            break;
        int l1 = str1.size(), l2 = str2.size();
        string fil = string(abs(l1-l2), '0');
        if(l1 < l2)
            str1 = fil + str1;
        else
            str2 = fil + str2;
        string str;
        int carr = 0, count = 0;
        for(int i = max(l1,l2)-1; i >= 0; i--){
            int t = str1[i]+str2[i]+carr - 2*'0';
            str = string(1, t%10+'0')+str;
            carr = t/10;
            if(carr)
                count++;
        }
        if(count == 0)
            cout << "No carry operation.\n";
        else if(count == 1)
            cout << "1 carry operation.\n";
        else 
            cout << count << " carry operations.\n";
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
