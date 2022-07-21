#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;

string frase(string s) 
{
	string es;
	for (int i = 0; i < s.size(); i++) {
		if ((s[i] >='A' && s[i] <='Z') || (s[i] >= 'a' && s[i] <='z')) {
			s[i] = tolower(s[i]);
			es += s[i];
		}
	}
	return es;

}

int main() {

	//fast_io;
	string s, aux;
	int cont = 0;
	while (getline(cin, s))
	{
		if (s == "DONE")
			break;
		s = frase(s);
		aux = s;
		reverse(aux.begin(), aux.end());
		if (s == aux)
			cout << "You won't be eaten!\n";
		else cout << "Uh oh..\n";
	}
	return(0);
}