#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main(){
fast_io;
long long T,N,aux,count,ans;
cin>>T;
  while (T--)
  {
 set<int>total;
 total.insert(0);
      cin>>N;
      ans=0;
      for(long long i=0;i<N;i++){
          cin>>aux;
          
          if(aux!=0){
           if(total.count(aux)==0){
              ans++;
              total.insert(aux);
           }  
          } 
      }
      cout<<ans<<"\n";
  }
return 0;
}