#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;

vector<int>A;
int n;

int combinar(int lo, int mi, int hi) {
    int maxL = -100000 , sumL = 0;
    for (int i = mi; i >= lo; i--) {
        sumL += A[i];
        maxL = max(maxL, sumL);
    }
    int maxR = -100000, sumR = 0;
    for (int i = mi + 1; i <= hi; ++i) {
        sumR += A[i];
        maxR = max(maxR, sumR);
    }
    return maxL + maxR;
}

int maxsum_subarray(int lo, int hi) {
    if (lo == hi) return A[lo];
    int mi = (lo + hi) / 2;
    int maxsumL = maxsum_subarray(lo, mi);
    int maxsumR = maxsum_subarray(mi + 1, hi);
    int maxsumC = combinar(lo, mi, hi); 
    return max(maxsumL, max(maxsumR, maxsumC));
}

int main() {
    fast_io;
    while ((true))
    {
     cin>>n;
     if(n==0)return 0;
     A=vector<int>(n);
     for(auto &elem: A)cin>>elem;
     if( maxsum_subarray(0, n -1)>0) 
     cout<<"The maximum winning streak is "<<maxsum_subarray(0, n -1)<<".\n";
     else cout<<"Losing streak.\n";
    }
}