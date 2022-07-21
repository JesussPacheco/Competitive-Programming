#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int suma = 0;
    int sumas = 0;
    int n;
    cin >> n;
    int **matriz = new int*[n];
for(int i = 0; i < n; i++) {
    matriz[i] = new int[n];
}
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
        cin>>matriz[i][j];
}
//for (int i = 0; i < n; i++) {
//    for (int j = 0; j < n; j++)
//        cout << matriz[i][j] << " ";
//        cout << endl;
//}
//cout << "Mostrando Matri<:" << endl;
for (int i = 0; i < n; i++)
    suma += matriz[i][i];
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
        if (i + j == n - 1)sumas += matriz[i][j];
}



cout << abs(suma - sumas) << endl;
    return(0);
}