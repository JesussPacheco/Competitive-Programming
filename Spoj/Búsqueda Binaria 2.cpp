#include<bits/stdc++.h>
typedef long long ll;
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
#define all(a) a.begin(),a.end()
using namespace std;
ll N,Q;
vector<ll>arr;
bool pred(ll x,ll t){
    return arr[x]<=t; 
}
ll  binary_search(ll lo,ll hi,ll t){
if (pred(hi,t)) 
    if (arr[hi] == t)
         return hi;
         else return -1; 
   if (!pred(lo,t)) return -1; 
    while (hi - lo > 1) {
     ll mi = lo + (hi - lo) / 2;
     if (pred(mi,t)) lo = mi;
     else hi = mi;
   }
   if (arr[lo] == t) return lo;
   return -1;
}
int main(){
    fast_io;
    cin>>N>>Q;
    arr=vector<ll>(N);
    for(auto &elem:arr)cin>>elem;
    while(Q--){
    ll t;
    cin>>t;
    cout<<binary_search(0,N-1,t)<<"\n";
    }
    return 0;
}