#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int vec[1001];
int contmin=0;
int contmax=0;
for(int i=0;i<n;i++){
	cin>>vec[i];
}
int min,max;
min=max=vec[0];
for(int i=0;i<n;i++){
	if(i!=0){
		if(vec[i]>max){
             contmax++;	
		max=vec[i];
	}
	  if(vec[i]<min){
	  	contmin++;
	  	min=vec[i];
	  }
	}
}
cout<<contmax<<" "<<contmin<<"\n";
    return(0);
}