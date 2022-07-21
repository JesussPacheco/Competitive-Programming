#include <bits/stdc++.h>
typedef long long ll;
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main() {
    fast_io;
    ll n;
    cin>>n;
    set<string>a;
    map<string,int>b;
    string aux;
    while(n--){
    cin>>aux;
    if(!a.count(aux)){
    a.insert(aux);
     cout<<"OK\n";
     b[aux]=1;
    }
    else{
     cout<<aux<<b[aux]<<"\n";
     b[aux]++;   
    }
    }
  return 0;
}