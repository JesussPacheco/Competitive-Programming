#include <bits/stdc++.h>
typedef long long ll;
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
#define all(a) a.begin(),a.end()
using namespace std;
int main() {
    fast_io;
 ll N,Q;
 cin>>N>>Q;
 vector<ll>a(N);
 for(auto &elem:a)cin>>elem;
 sort(a.begin(),a.end());
 ll aux;
while(Q--){
cin>>aux;
if(!binary_search(all(a),aux))
cout<<"-1\n";
else cout<<lower_bound(all(a),aux)-a.begin()<<"\n";
}
  return 0;
}