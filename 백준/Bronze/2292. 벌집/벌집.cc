#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
const ll MX = 201010;
const ll INF = 1e18;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
bool sieve[1010101];
vector<ll> p;
int main()
{
	FIO;

	ll n;

	cin >> n;

	n--;

	ll cnt = 1;
	ll d = 6;

	while (n > 0)
	{
		n -= d;
		d += 6;
		cnt++;
	}

	cout << cnt << "\n";
}