#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MX = 1010;
const ll INF = 1e18;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
ll GetCount(ll x, ll t)
{
	// 10! = 1*2*3*4*5*6*7*8*9*10

	ll curr = t;

	ll ret = 0;
	while (x >= curr)
	{
		ret += x / curr;
		curr *= t;
	}

	return ret;
}
int main()
{
	FIO;

	ll n, r;
	cin >> n >> r;
	
	ll two = GetCount(n, 2) - GetCount(n - r, 2) - GetCount(r, 2);
	ll five = GetCount(n, 5) - GetCount(n - r, 5) - GetCount(r, 5);

	cout << min(two, five);
}