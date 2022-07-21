#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
   fast_io;
    long long  a;
    cin>>a;
     if(a%3==0){
        cout<<"yes\n";
    }    
    else if((a+2)%3==0&&a%2!=0) cout<<"yes\n";
    else cout<<"no\n";
  return 0;
}

