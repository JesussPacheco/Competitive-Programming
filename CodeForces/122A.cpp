
#include <bits/stdc++.h>
typedef long long ll;
#define all(a) a.begin(),a.end()
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
#define size(a) a.size()
using namespace std;
vector<int>combinaciones;
void Combinations(string aux,string *items,int n,int r){
    string resp=aux;
    if(r>0){
        for(int x=0; x<n; x++){
            Combinations(aux+items[x],items,n,r-1);
        }
    }else{
        ll number=stoll(resp);
       combinaciones.push_back(number);
    }
}


int main() {
	fast_io;
    ll n;
    cin>>n;
   string a[]={"4","7"};
    Combinations("",a,2,1);
    Combinations("",a,2,2);
    Combinations("",a,2,3);
    for(auto elem:combinaciones){
        if(n%elem==0){
        cout<<"YES";
        return 0;
        }
    }
    cout<<"NO";
    return 0;

}