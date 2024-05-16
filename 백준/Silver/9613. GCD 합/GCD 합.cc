#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MX = 111;
const ll INF = 1e18;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
ll gcd(ll x, ll y)
{
	if (y == 0) return x;
	return gcd(y, x % y);
}
ll a[MX];
int main()
{
	FIO;

	ll tc;
	cin >> tc;

	while (tc--)
	{
		ll n;
		cin >> n;

		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		ll sum = 0;

		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				sum += gcd(a[i], a[j]);
			}
		}
		cout << sum << "\n";
	}

}