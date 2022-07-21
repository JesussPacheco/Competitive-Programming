#include <bits/stdc++.h>
typedef long long ll;
#define all(a) a.begin(),a.end()
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
bool is(string x){
string aux=x;
reverse(all(x));
return x==aux?true:false;
}
int  main() {
   fast_io;
  
   string s;
   vector<string>a;
   cin>>s;
      ll n=s.size();
   for(int mask=0;mask<(1<<n);mask++){
      string aux;
     for(int i=0;i<n;i++){
         if((mask>>i)&1){
           aux+=s[i];
         }
     }
     if(is(aux))
     a.push_back(aux);
   }
   string maxi=a[0];
  for(auto elem:a){
      maxi=max(maxi,elem);
  }
   cout<<maxi;
    
 return 0;
}