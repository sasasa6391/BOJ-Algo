#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
const ll MX = 201010;
const ll INF = 1e18;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
void soinsu(ll n)
{
	for (ll i = 2; i * i <= n; i++)
	{
		ll cnt = 0;
		while (n % i == 0)
		{
			n /= i;
			cnt++;
		}

		if(cnt) cout << i << " " << cnt << "\n";
	}
	if (n != 1)
	{
		cout << n << " " << 1 << "\n";
	}
}
int main()
{
	FIO;

	ll tc;

	cin >> tc;

	while (tc--)
	{
		ll x;
		cin >> x;
		soinsu(x);
	}


}