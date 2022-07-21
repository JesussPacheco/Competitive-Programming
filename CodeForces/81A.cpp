#include <bits/stdc++.h>
typedef long long ll;
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main() {
    fast_io;
string s;
cin>>s;
deque<char>a;
for(auto elem :s){
    if(a.empty()){
    a.push_back(elem);
    }
    else{
      if(elem==a.back())
      a.pop_back();  
      else a.push_back(elem);
    }
}
while(!a.empty()){
    cout<<a.front();
    a.pop_front();
}
  return 0;
}