#include <bits/stdc++.h>
typedef long long ll;
#define all(a) a.begin(),a.end()
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
void rellenar(deque<ll>&a,ll n){
     for(int i=1;i<=n;i++){
         a.push_front(i);
     }
}
int main() {
	fast_io;
	ll n;
	while (cin >> n)
	{
		if (n == 0)return 0;
		if (n == 1) {
			cout << "Discarded cards:" << "\n";
			cout << "Remaining card: " << n << "\n";
		continue;
		}
		deque<ll>a;
		rellenar(a, n);
		cout << "Discarded cards:";
		while (a.size() >= 2) {
			ll tmr = a.back();
			cout <<" "<<tmr;
            	a.pop_back();
			if (a.size()>1)cout << ",";
		
			ll aux = a.back();
			a.pop_back();
			a.push_front(aux);
		}
		cout <<"\n";
		cout << "Remaining card: " << a.front() << "\n";
	}
	return 0;
}

