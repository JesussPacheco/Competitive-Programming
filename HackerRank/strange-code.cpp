#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main() {
	fast_io;
long long t, a = 3, ans;
	cin >> t;
	for (int i = 1; t >a; i *= 2) {
		t-= a;
		a*=2;
	}
	ans=1+(a-t);
    cout<<ans;
	return 0;
}