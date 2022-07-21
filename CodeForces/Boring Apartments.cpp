#include <bits/stdc++.h>
typedef long long ll;
#define all(a) a.begin(),a.end()
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main() {
    fast_io;
ll t;
cin>>t;
while(t--){
  ll n;
  cin>>n;
  string aux=to_string(n);
  ll si=aux.size();
  ll sum;
  ll ans;
  if(si==1)sum=1;
  else if(si==2)sum=3;
  else if(si==3)sum=6;
  else if(si==4)sum=10;
  ll dig= aux.back()-'0';
  ans=(10*(dig-1))+sum;
cout<<ans<<"\n";
}
  return 0;
}
