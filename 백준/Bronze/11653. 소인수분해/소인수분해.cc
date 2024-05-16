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

	ll n;

	cin >> n;

	for (ll i = 2; i * i <= n; i++)
	{
		while (n % i == 0)
		{
			n /= i;
			cout << i << "\n";
		}
	}
	if (n != 1) {
		cout << n << "\n";
	}
}