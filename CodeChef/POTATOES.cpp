#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
bool esPrime(long long x){
    long long count=0;
    for(int i=1;i<=x;i++){
        if(x%i==0)count++;
        if(count>2){
            return true;
        }
    }
    return false;
}
int main() {
    fast_io;
  long long  t,x,y,ans,aument=0;
  cin>>t;
  while(t--){
  cin>>x>>y;
  aument=0;
  do{
      aument++;
    ans=x+y;
    ans+=aument;
  }while(esPrime(ans));
  cout<<aument<<"\n";
  }

  return 0;
}