#include <bits/stdc++.h>
typedef long long ll;
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main() {
	fast_io;
	ll n;
	map<ll, ll>a;
	cin >> n;
	ll costo;
	for (ll i = 1; i <= n; i++) {
		cin >> costo;
		a[costo] = i;
	}
	ll mini;
	ll j = 0;
	ll costAux = (a.begin())->first;
	ll indexAux = a.begin()->second;
	bool primera = true;
	for (auto elem : a) {
		if (j > 0) {
			if (primera) {
				if (elem.second > indexAux) {
					if (costAux > elem.first) {
						mini = costAux - elem.first;
						primera = false;
					}
				}
				else {
					if (elem.first > costAux) {
						mini = elem.first - costAux;
						primera = false;
					}
				}
			}
			else {
				if (elem.second > indexAux) {
					if (costAux > elem.first) {
						mini = min(costAux - elem.first,mini);
						primera = false;
					}
				}
					else {
						if (elem.first > costAux) {
							mini = min(elem.first - costAux,mini);
							primera = false;
						}
					}
				}
			
			costAux = elem.first;
			indexAux = elem.second;
		}		
		j++;
	}
	cout << mini << "\n";
	return 0;
}