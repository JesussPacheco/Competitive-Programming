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
		multiset<ll>a;
        ll auxi2;
		ll n;
		cin >> n;
		ll aux;
		for (ll i = 0; i<n; i++) {
			cin >> aux;
			if (a.size() == 0)a.insert(aux);
			else {
				auto ef = a.end();
				ef--;
				if (aux>*ef) a.insert(aux);
				else if (aux<*a.begin()) {
					a.erase(a.begin());
					a.insert(aux);
				}
				else {
					auto it = a.upper_bound(aux);
					if(it!=a.end())
					a.erase(it);

					a.insert(aux);
				}
			}
		}
		cout << a.size();
		for (auto elem : a)
			cout << " " << elem;

		cout << "\n";
	}
	return 0;
}