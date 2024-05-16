#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MX = 201010;
const ll INF = 1e18;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
int main()
{
	FIO;

	ll x, y;

	cin >> x >> y;

	ll s = x * y;

	for (int i = 0; i < 3; i++)
	{
		cout << x * (y % 10) << "\n";
		y /= 10;
	}
	cout << s << "\n";
}