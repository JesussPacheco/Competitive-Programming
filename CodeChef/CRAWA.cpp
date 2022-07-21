#include <bits/stdc++.h>
#define fast_io ios :: sync_with_stdio(false); cin.tie(NULL)
typedef long long ll;
using namespace std;
int main()
{
  fast_io;
	ll t, x, y, ans;
	cin >> t;
	while (t--)
	{
		cin >> x >> y;
		ans = 0;
		if (x == 0 && y == 0)
			ans++;

		if (x > 0 && x % 2 != 0)
		{
			if (y >= -(x - 1) && y <= x + 1)
				ans++;
		}
		if (y > 0 && y % 2 == 0)
		{
			if (x >= -y && x <= y - 1)
				ans++;

		}
		if (y < 0 && y % 2 == 0)
		{
			if (x >= -abs(y) && x <= abs(y) + 1)
				ans++;

		}

		if (x < 0 && x % 2 == 0)
		{
			if (y <= -x && y >= x)
				ans++;

		}

		if (ans > 0)
			cout << "YES" << endl;
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}