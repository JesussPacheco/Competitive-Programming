#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main() {
	fast_io;
	bool go;
	long long n, k, j = 1, aux1, aux2;
	cin >> n;
	while (n--) {
        go=true;
		cin >> k;
		aux1 = 0, aux2 = 0;
		for (int i = 2; i<k; i++) {

			if (k%i == 0) {
				if (go) {
					aux1 = i;
					go = false;
				}
				else aux2 = i;
			}
			if (aux1 != 0 && aux2 != 0)break;
		}
		cout << "Case #" << j << ":" << k << "=" << aux1 << "*" << k / aux1 << "=" << aux2 << "*" << k / aux2 << "\n";
		j++;
	}
	return 0;
}