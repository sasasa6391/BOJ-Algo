#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MX = 1111;
const ll INF = 1e18;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
ll n, m, p[MX][MX];
int main()
{
	FIO;

	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			ll x;
			cin >> x;
			p[i][j] = p[i - 1][j] + p[i][j - 1] - p[i - 1][j - 1] + x;
		}
	}

	while (m--)
	{
		ll lx, ly, hx, hy;

		cin >> lx >> ly >> hx >> hy;

		cout << p[hx][hy] - p[lx - 1][hy] - p[hx][ly - 1] + p[lx - 1][ly - 1] << "\n";
	}
}