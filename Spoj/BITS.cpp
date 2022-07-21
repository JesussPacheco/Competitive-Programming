#include <bits/stdc++.h>
typedef long long ll;
#define all(a) a.begin(),a.end()
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
#define size(a) a.size()
using namespace std;
int main() {
 int t,n;
  cin>>t;
  while(t--){
  cin>>n;
  string ans;
  ll cont=0;
  for(int i=1;i<=n;i++){
    bitset<11>b(i);
    string aux=b.to_string();
    ans+=aux;
  }
  for(auto elem:ans)if(elem=='1')cont++;
  cout<<cont<<"\n";
  }
  return 0;
}