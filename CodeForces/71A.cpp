#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
    fast_io;
     int n;
     cin>>n;
     string s;
     while(n--){
    cin>>s;
    if(s.size()<=10)
    cout<<s<<"\n";
    else {
    cout<<s[0]<<s.size()-2<<s.back()<<"\n";
     }
     }
     return 0;

    }


