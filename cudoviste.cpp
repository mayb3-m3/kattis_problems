#include <bits/stdc++.h>

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
    int a, b;
    cin >> a >> b;
    vector<string> vtr(a);
    for(int i = 0; i < a; i++)
        cin >> vtr[i];
    int c0 = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    for(int i = 0; i <= a-2; i++){
        for(int j = 0; j <= b-2; j++){
            char a = vtr[i][j], b = vtr[i][j+1];
            char c = vtr[i+1][j],d = vtr[i+1][j+1];
            if(a != '#' && b != '#' && c != '#' && d != '#'){
                int cnt = 0;
                if(a == 'X') cnt++;
                if(b == 'X') cnt++;
                if(c == 'X') cnt++;
                if(d == 'X') cnt++;
                if(cnt == 0) c0++;
                if(cnt == 1) c1++;
                if(cnt == 2) c2++;
                if(cnt == 3) c3++;
                if(cnt == 4) c4++;
            }
        }
    }
    cout << c0 << endl << c1 << endl << c2 << endl << c3 << endl << c4 << endl;
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
