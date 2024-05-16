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

	ll n, k;

	cin >> n >> k;

	sieve[1] = true;
	for (int i = 2; i <= n; i++)
	{
		if (sieve[i]) continue;

		for (int j = i; j <= n; j += i)
		{
			if (sieve[j]) continue;

			sieve[j] = true;
			k--;
			if (k == 0)
			{
				cout << j << "\n";
				return 0;
			}
		}
	}
}