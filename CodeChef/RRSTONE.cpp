#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main() {
	fast_io;
	long long n, k, maxi, it;
	cin >> n >> k;
	vector<long long>a(n);
	for (auto &elem : a)
		cin >> elem;
	maxi = a[0];
	for (auto &elem : a) {
		maxi = max(elem, maxi);
	}
    if(k==0)it=0;
	else if (k % 2 == 0)it = 2; 
    else it = 1;
	while (it--)
	{
		long long auxMax = maxi;
		for (int i = 0; i<n; i++) {
			a[i] = auxMax-a[i];
			if (i == 0)maxi = a[i];
			maxi = max(maxi, a[i]);
		}
	}
	for (int i = 0; i<n; i++) {
		if (i != n - 1)
			cout << a[i] << " ";
		else cout << a[i];
	}
	return 0;
}