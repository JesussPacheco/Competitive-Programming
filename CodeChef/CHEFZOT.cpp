#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
    fast_io;
    long long n;
    long long cont=0;
    long long aux=0;
    long long maxi=0;
    cin>>n;
    for(int i=0;i<n;i++){
       cin>>aux;
       if(aux!=0){
          cont++;
       }
       else {
        maxi=max(maxi,cont);
        if(i!=n-1)
        cont=0;
       }
    }
    maxi = max(maxi, cont);
    cout<<maxi<<"\n";
    return(0);
}

