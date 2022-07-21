#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	int n;
	string s;
	
	char ini;
	int count = 0;
	cin >> n;
	while (n--) {
		cin >> s;
		deque<char>letter;
		for (int i = 0; i < s.size(); i++) {
			letter.push_front(s[i]);
		}
		ini = letter.back();
		letter.pop_back();
		 
		while (letter.size()!=0)
		{

			if (ini == 'x'&&letter.back() == 'y' || ini == 'y'&&letter.back() == 'x') {
				count++;
				letter.pop_back();
				if (letter.size() != 0)
					ini = letter.back();
				else break;

			}
			else letter.pop_back();
		}
		
			cout << count << "\n";
			count = 0;

	}
	return(0);
}