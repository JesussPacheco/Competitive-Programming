#include <bits/stdc++.h>
typedef long long ll;
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
#define all(a) a.begin(),a.end()
using namespace std;
ll SD(ll x) {
	ll suma = 0;
	while (x>0) {
		suma += x % 10;
		x /= 10;
	}
	return suma;
}
ll func(ll x) {
	return (x*x) + (SD(x)*x);
}

ll binaryS(ll n) {
	ll lo = 1, hi = 200;
	while (lo<hi) {
     ll x = (- lo + sqrt (lo * lo + 4 * n)) / 2.0;

     if(x*x+SD(x)*x-n==0)return x;
     lo++;
    }
	return -1;
}
int main() {
    fast_io;
	ll n;
	cin >> n;
	cout << binaryS(n);
	return 0;
}