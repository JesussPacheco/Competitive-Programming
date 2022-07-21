#include<iostream>
#include<algorithm>
#include <cstring>
typedef long long ll;
#define a(all) a.begin(),a.end()
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
ll memo[105][105];
using namespace std;
ll comb(ll n, ll m) {
    if (m == 0 || m == n) return 1;
    ll &ret = memo[n][m];
    if (ret != -1) return ret;
    ret = comb(n - 1, m - 1) + comb(n - 1, m);
    return ret;
}
int main(){
    fast_io;
while(true){
       memset(memo, -1, sizeof(memo));
    ll N,M;
    cin>>N>>M;
    if(!N && !M)
    return 0;
    ll ans=comb(N,M);
    cout<<N<<" things taken "<<M<<" at a time is "<<ans<<" exactly.\n";

}
    return 0;
}