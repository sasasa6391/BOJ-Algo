#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MX = 1010;
const ll INF = 1e18;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
int main()
{
	FIO;

	ll n;

	cin >> n;

	ll ret = INF;

	for (int i = 0; i * 3 <= n; i++)
	{
		ll m = n - i * 3;

		if (m % 5 == 0)
		{
			ret = min(ret, m / 5 + i);
		}
	}

	if (ret == INF) cout << -1;
	else cout << ret;
}