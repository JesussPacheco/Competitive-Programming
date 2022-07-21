#include <bits/stdc++.h>
typedef long long ll;
#define all(a) a.begin(),a.end()
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
void left(ll &n, ll &suma, deque<ll>&x) {
	ll aux;
	suma = 0;
	for (ll i = 0; i < n; ++i) {
		cin >> aux;
		x.push_front(aux);
		suma += aux;
	}
}
int  main() {
	deque<ll>p1;
	deque<ll>p2;
	deque<ll>p3;

	ll n1, n2, n3, suma1, suma2, suma3;
	cin >> n1;
	cin >> n2;
	cin >> n3;
	left(n1, suma1, p1);
	left(n2, suma2, p2);
	left(n3, suma3, p3);

	while ((suma1 != suma2&&suma1 != suma3) || (suma2 != suma1&&suma2 != suma3 )|| (suma3 != suma2&&suma3 != suma1))
	{
		if (suma1 > suma2&&suma1 > suma3) { suma1 -= p1.back(); p1.pop_back(); }
		else if (suma2 > suma1&&suma2 > suma3) { suma2 -= p2.back(); p2.pop_back(); }
		else if (suma3 > suma1&&suma3 > suma2) { suma3 -= p3.back(); p3.pop_back(); }
		else if (suma1 == suma2 &&suma1>suma3) { suma1 -= p1.back(); p1.pop_back(); }
		else if (suma1 == suma3 &&suma1>suma2) { suma1 -= p1.back(); p1.pop_back(); }
		else if (suma2 == suma1 &&suma2>suma3) { suma2 -= p2.back(); p2.pop_back(); }
		else if (suma2 == suma3 &&suma2>suma1) { suma2 -= p2.back(); p2.pop_back(); }
		else if (suma3 == suma1 &&suma3>suma2) { suma3 -= p3.back(); p3.pop_back(); }
		else if (suma3 == suma2 &&suma3>suma1) { suma3 -= p3.back(); p3.pop_back(); }
	}
	cout << suma2 <<"\n";
	return 0;
}