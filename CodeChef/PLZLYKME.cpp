#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main() {
	fast_io;
	long long t, l, d, s, c, ans, aux;
	cin >> t;
	while (t--) {
		cin >> l >> d >> s >> c;
		if (s >= l) cout << "ALIVE AND KICKING\n";
		else {
			double exp = s*pow((c + 1), (d - 1));
			if (exp >= l)cout << "ALIVE AND KICKING\n";
			else cout << "DEAD AND ROTTING\n";
		}
	}
	return 0;

}