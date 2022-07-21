
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
    ll t;
    cin>>t;
    while(t--){
     ll n;
     cin>>n;
     vector<int>jug(n);

     for(int i=0;i<n;i++){
       string s;
       cin>>s;
       if(s=="lxh") jug[i]=1;
       else jug[i]=0;
     }
       int ans=jug[0];
       for(int i=1;i<n;i++){
         ans^=jug[i];
     }
     if(ans==1) cout<<"lxh\n";
     else cout<<"hhb\n";
    }
    return 0;

}