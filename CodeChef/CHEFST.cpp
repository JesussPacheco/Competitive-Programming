#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main() {
	//
	fast_io;
	long long T, n1, n2, m, rest, ans;
	cin >> T;
	while (T--) {
		cin >> n1 >> n2 >> m;
		rest = m*(m + 1);
		ans = max((n1 + n2) - rest, abs(n1 - n2));
		cout << ans<<"\n";
	}
	return 0;
}