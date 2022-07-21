#include <bits/stdc++.h>
typedef long long ll;
#define all(a) a.begin(),a.end()
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main() {
	fast_io;
	ll n;
	ll ulti;
	ll opc;
	ll aux;
	multiset<ll>a;
    stack<ll>dele;
	cin >> n;
	while (n--) {
		cin >> opc;
		if (opc == 1) {
            cin>>aux;
		  dele.push(aux);
          a.insert(aux);
          continue;
		}
		if (opc == 2) {
          	auto it = a.lower_bound(dele.top());
			a.erase(it);
            dele.pop();
            continue;
		}
		if (opc == 3) {
			auto et = a.end();
			et--;
			cout << *et << "\n";
		}

	}
	return 0;
}