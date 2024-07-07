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
#define nsorted(x,n) sort(x.begin(), x.begin()+n)
#define rsorted(x) sort(x.rbegin() , x.rend())
#define nrsorted(x,n) sort(x.rbegin() , x.rbegin()+n)
#define rev(x) reverse(x.begin(), x.end())
#define maxel(x) *max_element(x.begin(), x.end())
#define minel(x) *min_element(x.begin(), x.end())
#define maxell(x) max_element(x.begin(), x.end())
#define minell(x) min_element(x.begin(), x.end())
#define next_p(x) next_permutation(x.begin(), x.end())
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mod 1000000007
#define pie 3.141592653589793238
#define e_ 2.718281828459045235 

using namespace std;

void solve()
{
    map<char,vector<string>> mp;
    mp['0'] = {"+---+", "|   |", "|   |", "+   +", "|   |", "|   |", "+---+"};
    mp['1'] = {"    +", "    |", "    |", "    +", "    |", "    |", "    +"};
    mp['2'] = {"+---+", "    |", "    |", "+---+", "|    ", "|    ", "+---+"};
    mp['3'] = {"+---+", "    |", "    |", "+---+", "    |", "    |", "+---+"};
    mp['4'] = {"+   +", "|   |", "|   |", "+---+", "    |", "    |", "    +"};
    mp['5'] = {"+---+", "|    ", "|    ", "+---+", "    |", "    |", "+---+"};
    mp['6'] = {"+---+", "|    ", "|    ", "+---+", "|   |", "|   |", "+---+"};
    mp['7'] = {"+---+", "    |", "    |", "    +", "    |", "    |", "    +"};
    mp['8'] = {"+---+", "|   |", "|   |", "+---+", "|   |", "|   |", "+---+"};
    mp['9'] = {"+---+", "|   |", "|   |", "+---+", "    |", "    |", "+---+"};
    mp[':'] = {" ", " ", "o", " ", "o", " ", " "};
    while(1){
        string str;
        getline(cin,str);
        if(str == "end"){
            cout << "end\n";
            break;
        }
        for(int i = 0; i < 7; i++){
            for(int j = 0; j < 5; j++){
                if(j != 4)
                    cout << mp[str[j]][i] << "  ";
                else    
                    cout << mp[str[j]][i];
            }
            cout << endl;
        }
        cout << endl << endl;
    }
}
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
}
