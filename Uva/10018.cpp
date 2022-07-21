#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main() {
	fast_io;
	int N;
	cin >> N;
	int counti = 0;
	long long ans;
	string s, aux, aux2;
	while (N--) {
		cin >> s;
		aux = s;
		reverse(aux.begin(), aux.end());
		if (s == aux)cout << "0" << " " << s << "\n";
		else {
			do {
				aux = s;
				reverse(aux.begin(), aux.end());
				ans = stol(s) + stol(aux);
				s = to_string(ans);
				aux2 = s;
				reverse(aux2.begin(), aux2.end());
				counti++;

			} while (s != aux2);
			cout << counti << " " << ans << "\n";
			counti = 0;

		}
	}
	return(0);
}
