#include <bits/stdc++.h>
typedef long long ll;
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main() {
	fast_io;
	ll n;
	cin >> n;
	while (n--)
	{
		stack<char>a;
		string s;
		bool final = true;
		cin >> s;
		for (auto elem : s) {
			if (elem == '[' || elem == '(' || elem == '{') {
				a.push(elem);
			}
			else if (a.empty() == true && (elem == '}' || elem == ')' || elem == ']')) {
				cout << "NO\n";
				final = false;
				break;
			}
			else {
				if (elem == '}'&&a.top() != '{') {
					cout << "NO\n";
					final = false;
					break;
				}
				else if (elem == ']'&&a.top() != '[') {
					cout << "NO\n";
					final = false;
					break;

				}
				else if (elem == ')'&&a.top() != '(') {
					cout << "NO\n";
					final = false;
					break;

				}
				else {
					a.pop();
				}
			}

		}
		if (!final)continue;
		if (a.empty() == true) {
			cout << "YES\n";
		}
		else cout << "NO\n";
	}
	return 0;
}