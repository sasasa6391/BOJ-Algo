#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
const ll MX = 201010;
const ll INF = 1e18;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
ll cnt[10];
int main()
{
	FIO;

	string s;

	cin >> s;

	ll sum = 0;
	ll zero = 0;

	for (char c : s)
	{
		sum += c - '0';
		if (c == '0')
		{
			zero++;
		}
		cnt[c - '0']++;
	}

	if (sum % 3 == 0 && zero)
	{
		for (int i = 9; i >= 0; i--)
		{
			while (cnt[i]--)
			{
				cout << i;
			}
		}
	}
	else
	{
		cout << -1 << "\n";
	}
}