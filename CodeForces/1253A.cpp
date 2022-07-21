#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;


int main() {
	fast_io;
	int n, t, mini = 0, auxi, index;
	bool exit, prime, ulti;
	cin >> t;
	while (t--)
	{
		cin >> n;
		vector<int>a(n); vector<int>b(n); vector<int>aux(n);
		exit = true; prime = true; ulti = true;
		for (int i = 0; i<n; i++) cin >> a[i];
		for (int i = 0; i<n; i++) cin >> b[i];
		for (int i = 0; i<n; i++) {
			if (a[i]>b[i]) {
				exit = false;
				break;
			}
			if (a[i] != b[i]) {
				if (prime) {
					index = i;
					auxi = b[i] - a[i];
					prime = false;
				}
			}

			aux[i] = b[i] - a[i];
		}
		if (exit == false) {
			cout << "No\n";
			exit = false;
		}
        if(exit){
		for (int i = index; i<n; i++) {
			if (aux[i] != 0 && ulti == false) {
				cout << "No\n";
				exit = false;
				break;
			}
			else if (aux[i] != auxi&&aux[i] != 0) {
				cout << "No\n";
				exit = false;
				break;
			}
			if (aux[i] == 0)ulti = false;
		}
        }
		if (exit)cout << "Yes\n";
		
	}
	return 0;
}