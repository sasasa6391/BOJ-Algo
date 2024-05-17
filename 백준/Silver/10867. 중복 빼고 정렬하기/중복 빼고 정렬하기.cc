#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MX = 1010;
const ll INF = 1e18;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
vector<ll> v;
int main()
{
	FIO;

	ll n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		ll x;
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());

	for (ll x : v)
	{
		cout << x << " ";
	}
}