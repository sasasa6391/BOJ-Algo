#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MX = 1010;
const ll INF = 1e18;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
ll n, m, cnt[MX];
int main()
{
	FIO;

	cin >> n >> m;

	ll s = 0, x;

	cnt[0]++;

	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		s = (s + x) % m;
		cnt[s]++;
	}

	ll ret = 0;

	for (int i = 0; i < m; i++)
	{
		ret += cnt[i] * (cnt[i] - 1LL) / 2LL;
	}

	cout << ret;
}