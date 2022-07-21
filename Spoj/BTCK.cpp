#include <bits/stdc++.h>
typedef long long ll;
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
#define all(a) a.begin(),a.end()
using namespace std;
#define N 10;

int Cond(vector<int>a,vector<int>arr){
    int suma=0;
    for(int i=0;i<10;i++){
        suma+=a[i]*arr[i];
    }
    return suma;
}
void Solution(vector<int>&a,int k){
vector<int>arr={0,1,2,3,4,5,6,7,8,9};
bool go=false;
do{
    int var=Cond(a,arr);
    if(var<=k){
        go=true;
        for(auto elem:arr)cout<<elem<<" ";
        cout<<"\n";
        break;
    }
}while(next_permutation(all(arr)));
if(!go)
   cout<<"-1\n";
}
int main(){
 fast_io;
 int t;
 cin>>t;
 while(t--){
     vector<int>a(10);
     for(auto &elem:a)cin>>elem;
     int k;
     cin>>k;
     Solution(a,k);
 }


    return 0;
}