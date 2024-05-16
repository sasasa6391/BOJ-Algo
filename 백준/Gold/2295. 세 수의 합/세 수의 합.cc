#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MX = 1010;
const ll INF = 1e18;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
map<ll, ll> ma;
ll a[MX], ret = -INF, idx;
int main()
{
	FIO;

	ll n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	sort(a, a + n);

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			ma[a[i] - a[j]]++;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (ma[a[i] + a[j]])
			{
				if (ret < a[i] + a[j])
				{
					ret = a[i] + a[j];
					idx = i;
				}
			}
		}

		for (int j = i; j < n; j++)
		{
			ma[a[j] - a[i]]--;
		}

	}
	ll r = 0;

	for (int i = idx; i < n; i++)
	{
		for (int j = idx; j <= i; j++)
		{
			if (a[i] - a[j] == ret)
			{
				r = max(r, a[i]);
			}
		}
	}
	
	cout << r;

}