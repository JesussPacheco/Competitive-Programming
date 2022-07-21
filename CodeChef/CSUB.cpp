#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main() {
	fast_io;
	long long t, n, solos = 0;
	long long ans;
	string s;
	cin >> t;
	while (t--)
	{
		cin >> n;
		cin >> s;
		for (int i = 0; i<n; i++) {
			if (s[i] == '1')solos++;
		}
		ans = ((solos)*(solos - 1))/2 + solos;
		solos = 0;
		cout << ans << "\n";
	}
    return(0);
}

