#include <bits/stdc++.h>
typedef long long ll;
#define all(a) a.begin(),a.end()
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
const ll  N=100000;
vector<ll>primos;
vector<ll>noprimos;
vector<bool>tachado(N+1);
void sieve() {
    noprimos.push_back(1);
	for (ll  i = 2; i<N; i++) {
		if (!tachado[i]) {
			primos.push_back(i);
			for (ll  j = 2 * i; j <= N; j += i) {
				tachado[j] = true;
                noprimos.push_back(j);
			}
		}

	}
}
int main() {
	fast_io;
	ll t;
	cin >> t;
	while (t--) {
		ll n, c0, c1, h;
		cin >> n >> c0 >> c1 >> h;
		int cont0 = 0;
		int cont1 = 0;
		string s;
		cin >> s;
		for (auto e : s) {
			if (e== '0')cont0++;
			if (e == '1')cont1++;
		}
		ll a1 = (c0*cont0) + c1*cont1;
		ll a2 = (cont0 + cont1)*c1 + cont0*h;
		ll a3 = (cont0 + cont1)*c0 + cont1*h;
		ll ans = min(a1, a2);
		ans = min(ans, a3);
		cout << ans << "\n";
	}

	return 0;
}