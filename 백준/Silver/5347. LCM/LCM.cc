#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MX = 10101010;
const ll INF = 1e18;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
ll gcd(ll x, ll y)
{
	if (y == 0) return x;
	return gcd(y, x % y);
}
int main()
{
	FIO;
	ll tc;
	cin >> tc;

	while (tc--)
	{
		ll a, b;
		cin >> a >> b;

		ll g = gcd(a, b);

		cout << a * b / g << "\n";
	}

}