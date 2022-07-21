#include<bits/stdc++.h>
using namespace std;
int main() {
	long long n, m, a;
	long long  div1, div2;
	cin >> n >> m >> a;
	long long result;
	if ((n%a == 0)) {
		div1 = n / a;
	}
	else div1 = (n/a) + 1;

	if ((m%a == 0)) {
		div2 = m / a;
	}
	else div2 = (m/a) + 1;
	result = div1*div2;

	cout << result;
	return(0);
}