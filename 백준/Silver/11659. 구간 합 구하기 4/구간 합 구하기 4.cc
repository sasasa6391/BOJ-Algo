#include <bits/stdc++.h>
using namespace std;
const int MX = 101010;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
int n, m, p[MX];
int main()
{
	FIO;

	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;

		p[i] = p[i - 1] + x;
	}

	while (m--)
	{
		int l, r;
		cin >> l >> r;
		cout << p[r] - p[l - 1] << "\n";
	}
}