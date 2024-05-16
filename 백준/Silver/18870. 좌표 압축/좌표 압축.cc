#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MX = 1010101;
const ll INF = 1e18;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
ll a[MX];
int main()
{
	FIO;

	ll n;

	cin >> n;

	vector<ll> v;


	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		v.push_back(a[i]);
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());

	for (int i = 0; i < n; i++)
	{
		cout << lower_bound(v.begin(),v.end(),a[i]) - v.begin() << " ";
	}

}