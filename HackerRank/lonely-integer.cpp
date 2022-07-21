#include <bits/stdc++.h>
typedef long long ll;
#define all(a) a.begin(),a.end()
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
#define size(a) a.size()
using namespace std;
int main() {
  ll n;
  ll r=0;
  cin>>n;
  vector<ll>a(n);
  for(auto &elem:a) cin>>elem;
  for(auto elem:a)r^=elem;
  cout<<r;
  return 0;
}