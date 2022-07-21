#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
#define ll long long
using namespace std;
ll B,P,M;
int fast_pow(int a, int b) {
    if (b == 0) return 1;
    int L = fast_pow(a, b / 2);
    if (b % 2 == 0) return (L%M * L%M)%M;
    return (L%M * L%M * a%M)%M;
}

int main(){ 
  while (cin>>B>>P>>M){
   cout<<fast_pow(B,P)<<"\n";
  }
  return 0;
}