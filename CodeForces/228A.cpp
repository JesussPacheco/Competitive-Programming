#include <bits/stdc++.h>
typedef long long ll;
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main() {
    fast_io;
    set<ll>s;
    ll aux;
    for(int i=0;i<4;i++){
cin>>aux;
s.insert(aux);
    }
    cout<<4-s.size()<<"\n";
  return 0;
}