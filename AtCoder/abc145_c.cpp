#include <bits/stdc++.h>
typedef long long ll;
#define all(a) a.begin(),a.end()
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
 vector<double>prom;
double sum(pair<int,pair<int,int>>a,pair<int,pair<int,int>>b){
 double xi =a.second.first;
 double xj=b.second.first;
    double yi=a.second.second;
    double yj=b.second.second;
    double prim = (xi-xj)*(xi-xj);
    double sec = (yi-yj)*(yi-yj);
    double ans=sqrt(prim+sec);
    return ans;
}
int  main() {
   fast_io;
   ll n;
   cin>>n;
   vector<pair<int,pair<int,int>>>a;

    for(int i=1;i<=n;i++){
    int aux1,aux2;
    cin>>aux1>>aux2;
    a.push_back({i,{aux1,aux2}});
    }
    sort(all(a));
   do{
       double suma=0.0;
    for(int i=0;i<n-1;i++){
        suma+=sum(a[i],a[i+1]);
    }
    prom.push_back(suma);
 
   }while(next_permutation(all(a)));
   double anser=0.0;
   for(auto elem:prom){
      anser+=elem;
   }
   double num=prom.size();
   anser=anser/num;
   cout<<fixed<<setprecision(10);
   cout<<anser;
	return 0;
}