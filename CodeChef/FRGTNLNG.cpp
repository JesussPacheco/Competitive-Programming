#include <bits/stdc++.h>
typedef long long ll;
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main() {
    fast_io;
ll t;
cin>>t;
while(t--){
ll n,k;
  ll l;
    cin>>n>>k;
    vector<string>dic(n);
     set<string>mod;
    for(auto &elem:dic)cin>>elem;
     for(int i=0;i<k;i++){
         cin>>l;
         for(int j=0;j<l;j++){
         string aux;
         cin>>aux;
         mod.insert(aux); 
         }
     }
    for(auto elem:dic){
        if(mod.count(elem))
        cout<<"YES ";
        else cout<<"NO ";
    } 
    cout<<"\n";
}
  return 0;
}