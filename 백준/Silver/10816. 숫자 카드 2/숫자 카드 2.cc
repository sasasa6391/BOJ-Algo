#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MX = 505050;
const ll INF = 1e18;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
ll a[MX];
int main()
{
	FIO;

	ll n, m;

	cin >> n;

	a[n] = INF;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	sort(a, a + n);

	cin >> m;

	for (int i = 0; i < m; i++)
	{
		ll x;
		cin >> x;
		cout << ((upper_bound(a,a+n,x) - lower_bound(a, a + n, x))) << " ";
	}
}