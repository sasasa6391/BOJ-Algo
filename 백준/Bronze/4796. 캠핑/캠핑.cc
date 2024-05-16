#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
const ll MX = 201010;
const ll INF = 1e18;
const ll MOD = 10'007;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
int main()
{
	FIO;

	for (int i = 1;; i++)
	{
		ll l, p, v;
		cin >> l >> p >> v;

		if (l == 0 && p == 0 && v == 0) break;

		cout << "Case " << i << ": " << (v / p) * l + min(v % p, l) << "\n";
	}
}