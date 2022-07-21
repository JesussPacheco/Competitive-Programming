#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	char replace = 34;
	char xd;
	
	int cont = 0;
	while (cin.get(xd))
	{
		if (xd== replace&&cont % 2 == 0) {
			cout << "``";
			cont++;
		}
		else if (xd == replace&&cont % 2 != 0) {
			cout << "''";
			cont++;
		}
		else cout << xd;
 	}
	return(0);
}