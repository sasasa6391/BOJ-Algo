#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
const ll MX = 201010;
const ll INF = 1e18;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
ll ncr(ll x, ll y)
{
	if (y == 0 || x == y) return 1;
	
	return ncr(x - 1, y - 1) + ncr(x - 1, y);
}
int main()
{
	FIO;
	
	ll n, r;
	cin >> n >> r;
	cout << ncr(n, r);
}