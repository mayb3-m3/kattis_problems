#include <bits/stdc++.h>
#define imax INT_MAX
#define llmax INT64_MAX
#define ll long long
#define ull unsigned long long
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
    unordered_map<int, char> mp1, mp2, mp3;
    char ch = '0';
    for(int i = 0; i <= 9; i++)
        mp1[i] = ch++;
    ch = 'A';
    for(int i = 0; i <= 25; i++)
        mp2[i] = ch++;
    ch = 'a';
    for(int i = 0; i <= 25; i++)
        mp3[i] = ch++;
    string s;
    int n;
    while(cin >> s >> n){
        reverse(s.begin(), s.end());
        int l = s.size()-1;
        string ans;
        for(int i = 0; i <= l; i++){
            if(s[i] >= '0' && s[i] <= '9'){
                int num = s[i]-'0';
                int rem = n%10;
                int times = n/10 + (num+rem)/10;
                rem = (num+rem)%10;
                n = times;
                ans = string(1, mp1[rem]) + ans;

            }else if(s[i] >= 'A' && s[i] <= 'Z'){
                int num = s[i]-'A';
                int rem = n%26;
                int times = n/26 + (num+rem)/26;
                rem = (num+rem)%26;
                n = times;
                ans = string(1, mp2[rem]) + ans;
            }else{
                int num = s[i]-'a';
                int rem = n%26;
                int times = n/26 + (num+rem)/26;
                rem = (num+rem)%26;
                n = times;
                ans = mp3[rem] + ans;
            }
            if(i == l && n != 0){
                if(s[i] >= '0' && s[i] <= '9')
                    s.push_back('1');
                else if(s[i] >= 'A' && s[i] <= 'Z')
                    s.push_back('A');
                else
                    s.push_back('a');
                n--;
            }
            l = s.size()-1;
        }
        cout << ans << endl;
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
