#include <iostream>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<string>
#include<stack>
#include<bitset>
#include<set>
#include<map>
typedef long long ll;
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
#define all(a) a.begin(),a.end()
using namespace std;
#define N 10
using namespace std;
 /*
 /\ 
/__\  */

char M[1 << N][1 << (N + 1)];

void draw(int n, int x, int y) {
    if (n == 1) {
        M[x][y] = M[x - 1][y + 1] = '/';
        M[x][y + 1] = M[x][y + 2] = '_';
        M[x][y + 3] = M[x - 1][y + 2] = '\\';
        return;
    }
    draw(n - 1, x, y);
    draw(n - 1, x, y + (1 << n));
    int delta = (1 << (n - 1));
    draw(n - 1, x - delta, y + delta);
}

int main() {
    fast_io;
	int n;

	while (true) {
		
		cin >> n;
		if (n == 0)return 0;
		
		draw(n, (1 << n) - 1, 0);
		for (int i = 0; i < (1 << n); ++i) {
			for (int j = 0; j < (1 << (n + 1)); ++j) {
				if (M[i][j] != '/' && M[i][j] != '_' && M[i][j] != '\\')cout << " ";
				else
					cout << M[i][j];
			}
			cout << "\n";
		}
		cout << "\n";
		for (int i = 0; i < (1 << n); ++i) {
			for (int j = 0; j < (1 << (n + 1)); ++j) {
				M[i][j] = ' ';
			}
		}
	}
}