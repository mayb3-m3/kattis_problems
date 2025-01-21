#include <bits/stdc++.h>
#define pii pair<int, int>
#define pss pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>
#define pdd pair<double, double>

using namespace std;

void solve(){
    string s1, s2; cin >> s2 >> s1;
    bool ans = false;
    if(s1 == s2)
        ans = true;
    else{
        for(char ch = '0'; ch <= '9'; ch++){
            string t1 = s1+ch;
            string t2 = ch+s1;
            if(t1 == s2 || t2 == s2)
                ans = true;    
        }
        for(char& ch : s2){
            if(isupper(ch))
                ch += 32;
            else if(islower(ch))
                ch -= 32;
        }
        if(s1 == s2)
            ans = true;
    }
    if(ans == true)
        cout << "Yes\n";
    else
        cout << "No\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
