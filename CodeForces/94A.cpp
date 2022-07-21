#include <bits/stdc++.h>
typedef long long ll;
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main() {
    fast_io;
string s;
string auxs;
string ans="";
cin>>auxs;
map<string,ll>a;
for(int i=0;i<10;i++){
cin>>s;
a[s]=i;
}
for(int j=0;j<80;j++){
    ans+=auxs[j];
    if(ans.size()==10){
        cout<<a[ans];
    ans="";
    }
}
  return 0;
}