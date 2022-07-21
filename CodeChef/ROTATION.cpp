#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main() {
		fast_io;
	long long N, M, d, index = 1;
	cin >> N >> M;
	vector<int>number(N + 1);
	for (int i = 1; i < N + 1; i++) {
		cin >> number[i];
	}
	while (M--)
	{
		char aux;
		cin >> aux >> d;
		if (aux == 'C') {
			if (index - d<1)
				index = N - (abs(index - d));
			else index -= d;
		}
		else if (aux == 'A') {
			if (index + d>N)
				index = d - (abs(N - index));
			else index += d;
		}
		else {
			if (d>index)
				cout << number[abs(d - index) + 1] << "\n";
			else if (d<index) {
				int ans = (N - index) + d + 1;
				cout << number[abs(ans)] << "\n";
			}
			else {
				cout << number[1] << "\n";
			}
		
		}

	}
	return 0;
}