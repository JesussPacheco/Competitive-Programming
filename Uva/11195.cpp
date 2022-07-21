#include <bits/stdc++.h>
typedef long long ll;
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
#define all(a) a.begin(),a.end()
using namespace std;

int conf[20], n; // n columnas
bool disp_r[20], disp_d1[3* 10], disp_d2[3 * 10],disBAD[15][15];
int cont;
void bt(int col) {
    if (col == n) {
      cont++;
        return;
    }
    for (int row = 0; row < n; row++) {
        if (disp_r[row] && disp_d1[row + col] && disp_d2[row - col + n - 1]&& disBAD[row][col]) { 
            conf[col] = row;
            disp_r[row] = 0;
            disp_d1[row + col] = 0;
            disp_d2[row - col + n - 1] = 0;
            bt(col + 1);
            conf[col] = -1;
            disp_r[row] = 1;
            disp_d1[row + col] = 1;
            disp_d2[row - col + n - 1] = 1;
        }
    }
}

int main() {
    fast_io;
    int index=1;
    while(true){
    
    cin >> n;
    if(!n)return 0;
    char aux;
    cont=0;
    memset(disp_r, 1, sizeof(disp_r));
    memset(disp_d1, 1, sizeof(disp_d1));
    memset(disp_d2, 1, sizeof(disp_d2));
     memset(disBAD, 1, sizeof(disBAD));
     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
           cin>>aux;
           if(aux=='*')disBAD[i][j]=0;
         }
     }
      bt(0);
    cout<<"Case "<<index<<": "<<cont<<"\n";
    index++;
    }
   
}