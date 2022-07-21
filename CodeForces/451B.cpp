#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main() {

	fast_io;
	long long d, p, count = 0, ans, eleve, rest;
	string s;
	bool fin = true;
	cin >> p >> d;
	rest = p - d;
	for (long long int  i = 1; p >= i; i *= 10) {
		count++;
	}
	if (count > 19)count = 19;
	ans = (long long)pow(10, (count - 1)) - 1LL;
	eleve = ans + 1;
	while (p >= ans) {
		if (ans >= rest) {
			fin = false;
		}
		ans += eleve;
		if (ans>p&&fin == true) {
			ans -= eleve;
			eleve /= 10;
		}
	}
	cout << ans - eleve << "\n";

	return 0;
}
