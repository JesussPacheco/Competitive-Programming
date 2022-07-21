#include<iostream>
#include<vector>
using namespace  std;
 int N,Q;
 vector<int>arr;
 int BinarySearch(int number){
     int lo=0,hi=N-1;
    while (lo < hi) {
        int mi = (lo + hi) / 2;
        if (arr[mi] < number) lo = mi + 1;
        else hi = mi;
     }

     if (arr[lo] == number) return lo;
     return -1;
 }
int main()
{
    cin>>N>>Q;
    arr=vector<int>(N);
    for(auto &elem:arr)cin>>elem;
    while (Q--)
    {
    int q;
    cin>>q;
    cout<<BinarySearch(q)<<"\n";
    }
   return 0; 
} 