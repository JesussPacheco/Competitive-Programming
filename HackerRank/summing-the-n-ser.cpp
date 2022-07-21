#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
const int MOD = 1e9 + 7;
int main() {
 fast_io;
  long long  n,answer;
    int t;
    cin>>t;
    while(t--){
    cin>>n;
    answer=((n%MOD)*(n%MOD))%MOD;
    cout<<answer<<"\n";
    }
    return 0;
}


