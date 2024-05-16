#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
const ll MX = 201010;
const ll INF = 1e18;
const ll MOD = 10'007;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
ll dp[1010][1010];
ll ncr(ll x, ll y)
{
	ll& ret = dp[x][y];
	if (ret != -1) {
		return ret;
	}

	ret = -1;

	if (y == 0 || x == y) return ret = 1;
	
	return ret = (ncr(x - 1, y - 1) + ncr(x - 1, y)) % MOD;
}
int main()
{
	memset(dp, -1, sizeof(dp));
	FIO;
	
	ll n, r;
	cin >> n >> r;
	cout << ncr(n, r);
}