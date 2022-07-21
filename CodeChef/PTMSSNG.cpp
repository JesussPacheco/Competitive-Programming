#include <bits/stdc++.h>
typedef long long ll;
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main() {
	fast_io;
	ll t;
	cin >> t;
	while (t--) {
		map<ll, ll>repesX;
		map<ll, ll>repesY;
		ll n;
		cin >> n;
		ll auxn = (4 * n) - 1;
		while (auxn--) {
			ll x, y;
			cin >> x >> y;
			if (!repesX.count(x))
				repesX[x] = 1;
			else repesX[x]++;

			if (!repesY.count(y))
				repesY[y] = 1;
			else repesY[y]++;
		}
		ll indexX, indexY;
		for (auto elem : repesX) {
			if (elem.second % 2 != 0) {
				indexX = elem.first;
				break;
			}
		}
		for (auto elemy : repesY) {
			if (elemy.second % 2 != 0) {
				indexY = elemy.first;
				break;
			}
		}
		cout << indexX << " " << indexY << "\n";
	}
	return 0;
}