#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main() {
    fast_io;
  long long T,n,aux,ans; 
  cin>>T;
  while(T--){
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>aux;
    ans++;
    }
    cout<<(ans*(ans-1))/2<<"\n";
    ans=0;
  }
  return 0;
}