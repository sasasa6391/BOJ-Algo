#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MX = 1010;
const ll INF = 1e18;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
vector<ll> v;
ll a[MX], ret = -INF, idx;
int main()
{
	FIO;

	ll n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		for (int j = 0; j <= i; j++)
		{
			v.push_back(a[i] + a[j]);
		}
	}
	sort(v.begin(), v.end());
	

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (binary_search(v.begin(), v.end(), a[i] - a[j]))
			{
				ret = max(ret, a[i]);
			}
		}
	}

	cout << ret;
}