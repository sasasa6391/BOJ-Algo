#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
const ll MX = 201010;
const ll INF = 1e18;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
bool sieve[1010101];
vector<ll> p;
int main()
{
	FIO;


	sieve[1] = true;
	for (int i = 2; i <= 300000; i++)
	{
		if (sieve[i]) continue;

		p.push_back(i);
		for (int j = 2 * i; j <= 300000; j += i)
		{
			sieve[j] = true;
		}
	}

	ll n;
	while (cin >> n)
	{
		if (n == 0)
		{
			return 0;
		}

		auto high = upper_bound(p.begin(), p.end(), 2 * n);

		high--;


		cout << high - upper_bound(p.begin(), p.end(), n) + 1 << "\n";


	}
}