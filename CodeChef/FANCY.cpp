#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
   // fast_io;
    int n;
    string s;
    string aux;
    bool cmp;
    cin>>n;
    cin.ignore();
    while (n--)
    {
        cmp=false;
       getline(cin,s);
         istringstream iss(s);
        while ( iss>>aux)
        {
            if(aux=="not"){
            cout<<"Real Fancy\n";
            cmp=true;
            break;
            }
        }
        if(!cmp)
        cout<<"regularly fancy\n";
        
    }
    return(0);
}

