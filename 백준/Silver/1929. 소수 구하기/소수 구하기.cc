#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
const ll MX = 201010;
const ll INF = 1e18;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
bool sieve[1010101];
int main()
{
	FIO;

	ll m, n;

	cin >> m >> n;

	sieve[1] = true;
	for (int i = 2; i <= 1000000; i++)
	{
		if (sieve[i]) continue;

		for (int j = 2 * i; j <= 1000000; j += i)
		{
			sieve[j] = true;
		}
	}

	for (int i = m; i <= n; i++)
	{
		if (sieve[i] == false) cout << i << "\n";
	}
}