#include <bits/stdc++.h>
typedef long long ll;
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main() {
fast_io;
ll n;
cin>>n;
cin.ignore();
map<string,int>m;
string aux;
while(n--){
getline(cin,aux);
istringstream s(aux);
string w;
s>>w;
m[w]++;
}
for(auto elem:m){
   cout<<elem.first<<" "<<elem.second<<"\n";
}
  return 0;
}