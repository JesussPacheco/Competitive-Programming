#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main() {
fast_io;
 int n,m,l;
 cin>>n>>m;
 vector<int>a(n);
 vector<int>aux(n+1);
 set<int>ans;
for(auto &elem:a)cin>>elem;
for(int i=n-1;i>=0;i--){
ans.insert(a[i]);
aux[i]=ans.size();
}
for(int i=0;i<m;i++){
  cin>>l;
  cout<<aux[l-1]<<"\n";
}
  return 0;
}