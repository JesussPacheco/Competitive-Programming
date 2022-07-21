#include <iostream>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<string>
#include<stack>
#include<bitset>
#include<set>
#include<map>
using namespace std;
#define N 7
char M[729][729];
vector<int>preThree(8, 3);
vector<int>presec(8);
void Pre() {
	preThree[0] = 1;
	for (int i = 2; i<8; i++) {
		preThree[i] *= preThree[i - 1];
	}
	presec[2] = 2;
	for (int i = 3; i<8; i++) {
		presec[i] = presec[i - 1] * 3;
	}
}
void Draw(int n, int x, int y) {
	if (n == 1) {
		M[x][y] = 'X';
		return;
	}
	Draw(n - 1, x, y);
	Draw(n - 1, x, y + presec[n]);
	double delta = preThree[n - 2];
	if (n == 2)delta = 1;
	Draw(n - 1, x - delta, y + delta);
	double om = presec[n];
	Draw(n - 1, x - om, y);
	Draw(n - 1, x - om, y + om);


}
int main() {
	//fast_io;
	int n;
	Pre();
	while (true)
	{
		cin >> n;
		if (n == -1)return 0;
		Draw(n, preThree[n - 1] - 1, 0);
		for (int i = 0; i<preThree[n - 1]; i++)
		{
			for (int j = 0; j<preThree[n - 1]; j++) {
				if (M[i][j] != 'X')cout << " ";
				else
					cout << M[i][j];
			}
			cout << "\n";
		}
		cout << "-\n";
	}
	return 0;
}
