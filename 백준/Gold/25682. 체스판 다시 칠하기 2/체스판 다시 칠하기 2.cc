#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MX = 2222;
const ll INF = 1e18;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
ll n, m, k, p[MX][MX][2];
int main()
{
	FIO;

	cin >> n >> m >> k;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			char x;
			cin >> x;
			int flag1 = (x == 'B' && (((i + j) % 2) == 1)) || ((x == 'W') && ((i + j) % 2 == 0));
			int flag2 = (x == 'W' && (((i + j) % 2) == 1)) || ((x == 'B') && ((i + j) % 2 == 0));

			p[i][j][0] = p[i - 1][j][0] + p[i][j - 1][0] - p[i - 1][j - 1][0] + flag1;
			p[i][j][1] = p[i - 1][j][1] + p[i][j - 1][1] - p[i - 1][j - 1][1] + flag2;
		}
	}

	ll ret = INF;

	for (int i = k; i <= n; i++)
	{
		for (int j = k; j <= m; j++)
		{
			for (int w = 0; w < 2; w++) 
			{
				ret = min(ret, p[i][j][w] - p[i - k][j][w] - p[i][j - k][w] + p[i - k][j - k][w]);
			}
		}
	}
	cout << ret;

}