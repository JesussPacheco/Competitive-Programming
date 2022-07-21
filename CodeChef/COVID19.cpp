
#include <bits/stdc++.h>
typedef long long ll;
#define all(a) a.begin(),a.end()
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
#define size(a) a.size()
using namespace std;
const ll NF=1000000;//Modificar segÃºn el problema
const ll NP=100000;//Modidicar segÃºn el problema
const ll NFib=1000;//this up
const ll MOD=1e9+7;
const double eps =1e-7;//PresciciÃ³n en == y evitar WA con doubles:'v
ll fact[NF];
ll  fibo[NFib];
vector<ll>primos;
vector<ll>noprimos;
vector<bool>tachado(NP+1);
void sieve() {      //Criba para problemas con primos 
    noprimos.push_back(1);
	for (ll  i = 2; i<NP; i++) {
		if (!tachado[i]) {
			primos.push_back(i);
			for (ll  j = 2 * i; j <= NP; j += i) {
				tachado[j] = true;
                noprimos.push_back(j);
			}
		}
 
	}
}
void Factorial(){  //precalcular factoriales

fact[0]=1;
for(int i=1;i<NF;i++){fact[i]=fact[i-1]*i;}
}
void Fibona(){//precalcular fib
    fibo[0]=0;
    fibo[1]=1;
    for(int i=2;i<NFib;i++)fibo[i]=fibo[i-1]+fibo[i-2];
}
ll right(vector<ll>a, ll n) {
	ll cont = 0;
	for (int i = n; i<size(a); i++) {
		if (i != size(a) - 1) {
			ll kk = a[i + 1];
			if (abs(a[i] -kk) <= 2)cont++;
			else return cont;
		}
	}
	return cont;
}
ll left(vector<ll>a, ll n) {
	ll cont = 0;
	for (int i = n; i >= 0; i--) {
		if (i != 0) {
			if (abs(a[i] - a[i - 1]) <= 2)cont++;
			else return cont;
		}
	}
	return cont;
}
int main() {
	fast_io;
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		vector<ll>a(n);
		for (auto &elem : a)cin >> elem;
		ll maxi = 0;
		ll mini = 10000;
		for (int i = 0; i<size(a); i++) {
			ll aux = right(a, i) + left(a, i) + 1;
			maxi = max(maxi, aux);
			mini = min(mini, aux);
		}
		cout << mini << " " << maxi << "\n";
	}
	return 0;

}