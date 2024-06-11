#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, m, dist[101][101];
const ll INF = 1e18;
int main()
{
	cout.sync_with_stdio(0);


	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			dist[i][j] = INF;
		}
		dist[i][i] = 0;
	}

	for (int i = 0; i < m; i++)
	{
		ll x, y, c;
		cin >> x >> y >> c;
		x--, y--;
		dist[x][y] = min(dist[x][y], c);
	}

	for (int k = 0; k < n; k++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (dist[i][k] == INF || dist[k][j] == INF) continue;

				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (dist[i][j] == INF)
			{
				cout << 0 << " ";
			}
			else
			{
				cout << dist[i][j] << " ";
			}
		}
		cout << "\n";
	}
}