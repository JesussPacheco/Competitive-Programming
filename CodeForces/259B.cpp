
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

int main() {
fast_io;

vector<ll>a(9);
ll sum=0;
for(auto &elem:a){cin>>elem;sum+=elem;}
sum=sum/2;
 
	ll a1 = sum - a[1] - a[2];
	ll a2 = sum - a[1] - a[7];
	ll a3 = sum - a[2] - a[5];
     a[0]=a1;
     a[4]=a2;
     a[8]=a3;
    ll cont=0;
for(auto elem:a){
    if(cont==3){cout<<"\n";cont=0;}
    cout<<elem<<" ";
    cont++;
}
} 