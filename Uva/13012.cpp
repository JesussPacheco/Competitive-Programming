#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int cont=0;
    int aux;
    while(cin>>n){
     for(int i=0;i<5;i++){
       cin>>aux;
       if(aux==n)cont++;
     }
     cout<<cont<<"\n";
     cont=0;;
    }
    return(0);
}
