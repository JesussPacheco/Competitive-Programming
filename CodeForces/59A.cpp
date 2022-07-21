#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
void Draw(string s,bool x){
    for(int i=0;i<s.size();i++){
        if(x){
            s[i]=toupper(s[i]);
        }
        else s[i]=towlower(s[i]);
        cout<<s[i];
    }

}
int main() {
	fast_io;
	int cM = 0, cm = 0;
	string s;
	char aux;
	cin >> s;

	for (int i = 0; i<s.size(); i++) {
		aux=s[i];
		aux = toupper(aux);
		if (s[i] == aux)cM++;
		else cm++;
	}
	bool x;
	if (cM>cm) x = true;
	else x = false;
	Draw(s, x);
	return(0);
}

