#include<bits/stdc++.h>
using namespace std;
int main(){
int n,b;
int cant;
while(cin>>n>>b){
  
  if(n==0&&b==0){
  	
}
else
{
 cant=n+1;
vector<bool>balls(cant);
vector<int>quedan(b);
for(int i=0;i<n+1;i++){
    balls[i]=false;
}
for(int i=0;i<b;i++){
    cin>>quedan[i];
    balls[quedan[i]]=true;
}
cant-=b;
for(int i=0;i<b-1;i++){
    for(int j=i+1;j<b;j++){
        if(balls[abs(quedan[i]-quedan[j])]==false){
  balls[abs(quedan[i]-quedan[j])]=true;
  cant--;
        }
    }
    }
    if(cant==0)
        cout<<"Y\n";
    else cout<<"N\n";
}
}
    return 0;
}