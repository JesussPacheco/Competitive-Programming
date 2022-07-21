#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main()
{
	int min, max;
	int n;
	string s;
	max = 11;
	min = 0;
	while (cin >> n)
	{
		if (n == 0)
			break;
		cin.ignore();
		getline(cin, s);
		if (s == "right on")
		{
		if (max <= n || n <= min)
		cout << "Stan is dishonest" << endl;
		else
		cout << "Stan may be honest" << endl;
		max = 11;
		min = 0;
		}
		if (s == "too high" &&n<max)
			max = n;
		if (s == "too low" && n>min)
			min = n;
	}
	return 0;
}