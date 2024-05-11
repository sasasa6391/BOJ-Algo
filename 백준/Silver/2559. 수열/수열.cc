#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MX = 101010;
const ll INF = 1e18;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
ll n, k, p[MX];
int main()
{
	FIO;

	ll ret = -INF;

	cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		ll x;
		cin >> x;
		p[i] = p[i - 1] + x;
	}

	for (int i = k; i <= n; i++)
	{
		ret = max(ret, p[i] - p[i - k]);
	}

	cout << ret;
}