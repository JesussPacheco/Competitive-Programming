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
		ll auxx = 0;
		ll auxy = 0;
		ll x, y;
		ll cont1 = 0;
		cin >> x >> y;
		ll opc;
		ll ejex, ejey;
		if (x>auxx&&y>auxy)
		{
			ejey = 1;//1
			ejex = 1;
			;
		}
		else if (x<auxx&&y>auxy) {
			ejey = 1;//2
			ejex = -1;
		}
		else if (x>auxx&&y<auxy) {
			ejey = -1;//4
			ejex = 1;
		}
		else {
			ejex = -1;//3
			ejey = -1;
		}
		bool adve = true;
 
		while (true) {
			if (x == auxx || y == auxy)break;
			if (adve == true)
			{
				auxy += ejey;
				adve = false;
				//	yi += ejey;
			}
			else if (adve == false) {
				auxx += ejex;
				adve = true;
			}
			cont1++;
		}
		ll sum;
		if (auxx == x) {
			sum = abs(y - auxy) + abs(y - auxy) - 1;
		}
		if (auxy == y) {
			sum = abs(x - auxx) + abs(x - auxx) - 1;
		}
		ll xi = x; ll yi = y;
		adve = true;
		ll cont2 = 0;
		auxx = auxy = 0;
		while (true) {
			if (xi == auxx || yi == auxy)break;
			if (adve == true)
			{
				auxx += ejex;
				adve = false;
				//	yi += ejey;
			}
			else if (adve == false) {
				auxy += ejey;
				adve = true;
			}
			cont2++;
		}
		
		ll otra;
		if (auxx == xi) {
			otra = abs(yi - auxy) + abs(yi - auxy) - 1;
		}
		if (auxy == yi) {
			otra = abs(xi - auxx) + abs(xi - auxx) - 1;
		}
		ll ans = cont1 + sum;
		ll ans2 = cont2 + otra;
		if(x==0&&y==0)cout<<0<<"\n";
		else
		cout << min(ans, ans2) << "\n";
	}
	return 0;
}