#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MX = 101010;
const ll INF = 1e18;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
ll n, k, cnt[MX][26];
int main()
{
	FIO;
	string s;

	cin >> s;

	ll q;

	cin >> q;

	for (int i = 0; i < s.size(); i++)
	{
		for (int j = 0; j < 26; j++)
		{
			cnt[i + 1][j] = cnt[i][j] + (s[i] == (j + 'a'));
		}
	}

	while (q--)
	{
		char c;
		ll l, r;
		cin >> c >> l >> r;
		l++;
		r++;

		cout << cnt[r][c - 'a'] - cnt[l - 1][c - 'a'] << "\n";
	}
}