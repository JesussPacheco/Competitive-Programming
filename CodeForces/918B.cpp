#include <bits/stdc++.h>
typedef long long ll;
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main() {
    fast_io;
   ll n, m;
   cin>>n>>m;
   map<string,string>a;
   map<string,string>b;
while(n--){
string name;
cin>>name;
string ip;
cin>>ip;
a[ip]=name;
}
cin.ignore();
while(m--){
    string aux1;
    getline(cin,aux1);
    istringstream s(aux1);
    string name;
    string ip;
    s>>name>>ip;
    ip.pop_back();
    cout<<name<<" "<<ip<<";"<<" #"<<a[ip]<<"\n";
}

  return 0;
}