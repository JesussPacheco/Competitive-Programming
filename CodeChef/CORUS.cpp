#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main() {
	  fast_io;
	long long T, N, Q, C, ans = 0;
	string s;
	cin >> T;
	while (T--)
	{
		cin >> N >> Q>>s;
		vector<int>abc('z'+1, 0);
		for (char elem : s) {
			abc[elem]++;
		}
		while (Q--) {
			cin >> C;
			for (auto elem : abc)
				if (elem > C) ans += elem - C;
			cout << ans << "\n";
			ans = 0;
		}
	}
	return(0);
}
