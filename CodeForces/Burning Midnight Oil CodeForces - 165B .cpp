#include<iostream>
typedef long long ll;
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
#define all(a) a.begin(),a.end()
using namespace std;
ll n, k;
bool func(ll v) {
	ll suma = v;
	ll auxK = k;
	ll act;
	for (ll i = 1; v / auxK>0; i++) {
		if (i > 1)
			auxK *=k;
		act = v / auxK;
		suma += act;
		if (suma >= n)return true;
	}
	return false;
}
ll BS(ll lo, ll hi) {
	if (func(lo))return lo;
	while (hi - lo>1) {
		ll mid = lo + (hi - lo) / 2;
		if (func(mid))hi = mid;
		else lo = mid;
	}
	return hi;
}
int main() {
    fast_io;
	cin >> n >> k;
	cout << BS(0, n);
	return 0;
	
}