#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main() {
	fast_io;
	long long N, Q, t;
	cin >> N >> Q;
	vector<long long>a(N);
	for (auto &elem : a)cin >> elem;
	sort(a.begin(), a.end());
	while (Q--) {
		cin >> t;
		if (a[0] <= t&&t <= a.back())
			cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}