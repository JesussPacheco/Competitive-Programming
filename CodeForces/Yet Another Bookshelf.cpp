#include <bits/stdc++.h>
typedef long long ll;
#define all(a) a.begin(),a.end()
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main() {
	fast_io;
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		vector<ll>a(n);
		for (auto &elem : a) {
			cin >> elem;
		}
		ll ans = 0;
		ll aux = 0;
		bool entro = false;
		for (auto elem : a) {
			if (elem == 1 && entro == false) {
				entro = true;
				continue;
			}
			if (elem == 1) {
				aux = 0;
			}
			if (elem == 0&&entro==true) {
				ans++;
				aux++;
			}
		}
		auto it = a.end();
		it--;
		if (*it == 1)
			cout << ans << "\n";
		else cout << ans - aux << "\n";
	}
	return 0;
}