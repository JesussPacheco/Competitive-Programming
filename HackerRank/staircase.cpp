#include<bits/stdc++.h>
using namespace std;
void space(int n) {
    for (int i = 0; i < n; i++) {
        cout << " ";
    }
}
void Draw(int n) {
    for (int i = 0; i < n; i++) {
        cout <<"#";
    }
    cout << endl;
}
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        space((n-1)-i);
        Draw(i + 1);
    }
    return(0);
}
