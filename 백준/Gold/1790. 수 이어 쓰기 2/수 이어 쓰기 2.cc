#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
const ll MX = 201010;
const ll INF = 1e18;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
ll n, k, l = 1, t = 10, e;
int main()
{
	FIO;

	ll n, k;

	cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		if (e + l >= k)
		{
			vector<ll> p;
			ll u = i;
			while (u > 0)
			{
				p.push_back(u % 10);
				u /= 10;
			}
			reverse(p.begin(), p.end());
			cout << p[k - e - 1];
			return 0;
		}
		if (i % t == 0)
		{
			l++;
			t *= 10;
		}

		e += l;

	}
	cout << -1;
}