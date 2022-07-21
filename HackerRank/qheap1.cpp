#include <bits/stdc++.h>
typedef long long ll;
#define all(a) a.begin(),a.end()
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
#define size(a) a.size()
using namespace std;
int main() {
    fast_io;
    ll q,aux;
    cin>>q;
    set<ll>st;
    while(q--){
      ll v;
      cin>>v;
      if(v==1){
        cin>>aux;
        st.insert(aux);
        continue;
      }
      if(v==2){
        cin>>aux;
        st.erase(aux);
        continue;
      }
      if(v==3){
        cout<<*st.begin()<<"\n";
      }
    }
  return 0;
}