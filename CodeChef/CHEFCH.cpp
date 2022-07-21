#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main() {
	fast_io;
	long long T, S, ans, aux;
	bool es;
	bool deter;
	bool final;
	string s;
	cin >> T;
	while (T--) {
		cin >> s;
		ans = 0;
		aux = 1;
		final = true;
		for (int i = 0; i < s.size(); i++) {
			if (i == 0) {
				if (s[i] == '+') {
					deter = true;
					es = false;
				}
				else
				{
					deter = false;
					es = true;
				}
			}
			else {
				if (deter == true) {
					if (s[i] != '-')ans++;
					deter = false;
				}
				else if (deter == false) {
					if (s[i] != '+')ans++;
					deter = true;
				}
				if (i != 0 && final == true) {
					if (es == false && s[i] == '+')
						es = true;

					else if (es == true && s[i] == '-')
						es = false;
					else {
						aux++;
						if (es == true)es = false;
						else es = true;
					}
				}
			}
		}

		cout << min(ans, aux) << "\n";
	}
	return 0;
}