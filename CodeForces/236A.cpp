#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
bool cmp(string &s, char x) {
	for (int i = 0; i<s.size(); i++) {
		if (x == s[i]) return true;
	}
    return false;
}

int main() {
	fast_io;
	string s; 
	string aux;
	int cont;
	cin >> s;
	for (char elem : s) {
		if (!cmp(aux, elem)) {
			cont++;
			aux += elem;
		}
	}
	if (cont % 2 != 0)cout << "IGNORE HIM!\n";
	else cout << "CHAT WITH HER!\n";
	return 0;
}
