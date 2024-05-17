#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MX = 10101010;
const ll INF = 1e18;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
// 거의 소수
// 10^7 에라토스 돌리면 될듯
bool sieve[MX];
ll cnt;
int main()
{
	FIO;

	ll a, b;

	cin >> a >> b;

	for (int i = 2; i <= 10000000; i++)
	{
		if (sieve[i]) continue;
		
		ll p = i;

		while (true)
		{
			if (p > b / i)
			{
				break;
			}
			p *= i;
			if (p >= a && p <= b)
			{
				cnt++;
			}
		}

		for (int j = 2 * i; j <= 10000000; j += i)
		{
			sieve[j] = true;
		}
	}

	cout << cnt;

}