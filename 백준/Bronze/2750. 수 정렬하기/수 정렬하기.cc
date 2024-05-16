#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MX = 201010;
const ll INF = 1e18;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
int main()
{
	FIO;

	ll n;
	cin >> n;

	vector<ll> v;

	for (int i = 0; i < n; i++)
	{
		ll x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());

	for (ll x : v)
	{
		cout << x << "\n";
	}

}