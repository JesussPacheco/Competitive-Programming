#include <bits/stdc++.h>
typedef long long ll;
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main() {
fast_io;
ll n;
cin>>n;
map<ll,ll>number;
ll ans=0;
ll aux;
while(n--){
cin>>aux;
 if(!number.count(aux))
  number[aux]=1;
 else { 
    number[aux]++;
    if(number[aux]>aux)
        ans++;
 }
}
for(auto elem:number){
    if(elem.second<elem.first){
        ans+=elem.second;
    }
}
 cout<<ans;
  return 0;
}