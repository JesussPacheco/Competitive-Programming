#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int can(long long a){
    int suma=0;
    while (a>0)
    {
        suma+=a%10;
        a=a/10;
    }
    return suma;  
}
int main() {
	fast_io;
	int T, N;
	int pChef = 0, pMort = 0;
	long long  aux1, aux2;
	cin >> T;
	while (T--)
	{
		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> aux1 >> aux2;
			if (can(aux1) > can(aux2))pChef++;
			else if (can(aux2) > can(aux1))pMort++;
			else {
				pChef++;
				pMort++;
			}
		}
		if (pChef > pMort) { cout << "0 " << pChef << "\n"; }
		else if (pMort > pChef){cout << "1 " << pMort << "\n";
	}
		else cout << "2 "<<pChef<<"\n";
		pChef = 0;
		pMort = 0;
	}
	return(0);
}

