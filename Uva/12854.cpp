#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fast_io;
vector<int>A(5);
vector<int>B(5);
bool x;
while(cin>>A[0]>>A[1]>>A[2]>>A[3]>>A[4]>>B[0]>>B[1]>>B[2]>>B[3]>>B[4])
{
    x=true;
    for(int u=0;u<5;u++){
        if(A[u]==B[u]){
            cout<<"N\n";
            x=false;
            break;
        }
    }
        if(x==true)
        cout<<"Y\n";   
    }
	return(0);
}

