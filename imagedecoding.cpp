#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
bool f = true;
	while (true){
		int n;
		cin >> n;
		cin.ignore();
		if (n == 0)
			break;
		if (f == false)
			cout << endl;
		f = false;
		bool isError = false;
		int sum = 0;
		for (int i = 0; i < n; i++){
			string str;
			int tSum = 0;
			getline(cin, str);
			char fc = str[0];
			stringstream ss(str.substr(2));
			int num;
			while (ss >> num){
				tSum += num;
				for (int i = 0; i < num; i++)
					cout << fc;
				fc = fc == '#' ? '.' : '#';
			}
			if ((i != 0) && (tSum != sum))
				isError = true;
			sum = tSum;
			cout << endl;
		}
		if (isError)
			cout << "Error decoding image\n";
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}
