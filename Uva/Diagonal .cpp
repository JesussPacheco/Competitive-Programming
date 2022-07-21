#include<bits/stdc++.h>
typedef long long ll;
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
#define all(a) a.begin(),a.end()

using namespace std;
ll N;
ll pre(ll x){
return ((x*(x-1))-2*x)/2;
}
ll BS(ll lo,ll hi){
  ll mid=lo+(hi-lo)/2;
  ll posans=pre(mid);
  if(lo>=hi||posans==N) return mid;
  if(posans<N) return BS(mid+1,hi);
  return BS(lo,mid);
}
int main(){
    fast_io;
    ll i=1;
    ll ans;
   while(true){
       cin>>N;
        if(!N)return 0;
        ans=1000000000;
        ans=min(N,ans);
        cout<<"Case "<<i<<": "<<BS(4,ans)<<"\n";
        i++;
   }
    return 0;
}