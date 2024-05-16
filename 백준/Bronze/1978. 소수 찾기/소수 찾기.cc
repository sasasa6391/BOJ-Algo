#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
const ll MX = 201010;
const ll INF = 1e18;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
int main()
{
	FIO;

	ll n;

	cin >> n;
	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		ll x;
		cin >> x;

		bool isPrime = true;

		for (ll i = 2; i * i <= x; i++)
		{
			if (x % i == 0)
			{
				isPrime = false;
			}
		}

		if (x != 1 && (x == 2 || isPrime == true))
		{
			cnt++;
		}
	}
	cout << cnt;
}