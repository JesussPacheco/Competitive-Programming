#include <bits/stdc++.h>
typedef long long ll;
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
#define all(a) a.begin(),a.end()
using namespace std;
void F(string s){
      if(s.size()==1){
        cout<<s<<"\n";
        return;
    }
    int sum=0;
    for(auto elem:s){
        sum+=elem -'0';
    }
    string aux= to_string(sum);
    F(aux);
}
int main() {
fast_io;
while(true){
    string s;
     cin>>s;
    if(stoll(s)==0) return 0;
    F(s);
}
return 0;
}