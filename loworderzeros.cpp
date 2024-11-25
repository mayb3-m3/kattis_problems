#include <bits/stdc++.h>

#define imax INT_MAX
#define llmax INT64_MAX
#define ll long long
#define _rand(x,y) min(x,y)+rand()%(abs(y-x)+1)
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pss pair<string, string>
#define psi pair<string, int>
#define pis pair<int, string>
#define mod 1000000007
#define pie 3.141592653589793238
#define _e 2.718281828459045235

using namespace std;

void solve(){
    int lim = 1e6;
    vector<int> precal(lim+1, 1);
    vector<int> ana{6, 2, 4, 8};
    int ans = 1, c2 = 0, c5 = 0;
    for(int i = 2; i <= lim; i++){
        int num = i;
        while(num % 2 == 0)
            c2++, num /= 2;
        while(num % 5 == 0)
            c5++, num /= 5;
        ans = (ans*num)%10;
        int diff = c2-c5;
        precal[i] = (ans*ana[diff%4])%10;
    }
    while(1){
        int n; cin >> n;
        if(n == 0)
            break;
        cout << precal[n] << endl;     
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
