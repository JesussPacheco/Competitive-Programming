#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
int n,k,aux;
int result=0;
cin>>t;
while(t--){
  cin>>n>>k;
  for(int i=0;i<n;i++){
      cin>>aux;
      if(aux>k)
      result+=aux-k;
  }
cout<<result<<"\n";
result=0;
}
    return(0);
}