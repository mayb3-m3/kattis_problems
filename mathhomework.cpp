#define imax INT_MAX
#define llmax INT64_MAX
#define ll long long
#define sorted(x) sort(x.begin() , x.end())
#define rsorted(x) sort(x.rbegin() , x.rend())
#define nextp(x) next_permutation(x.begin(), x.end())
#define _rand(x,y) min(x,y)+rand()%(abs(y-x)+1)
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pss pair<string, string>
#define psi pair<string, int>
#define pis pair<int, string>
#define mod 1000000007
#define pie 3.141592653589793238
#define e_ 2.718281828459045235

using namespace std;

void solve(){
    int a, b, c, l, count = 0;
    cin >> a >> b >> c >> l;
    for(int i = 0; i <= l/a; i++)
        for(int j = 0; j <= l/b; j++)
            for(int k = 0; k <= l/c; k++)
                if(i*a + j*b + k*c == l)
                    cout << i << " " << j << " " << k << endl,
                    count = 1;
    if(count == 0)
        cout << "impossible\n";
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
