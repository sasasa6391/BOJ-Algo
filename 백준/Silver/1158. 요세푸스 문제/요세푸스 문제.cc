#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
const ll MX = 201010;
const ll INF = 1e18;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
int main()
{
	FIO;

	ll n, k;
	cin >> n >> k;

	queue<ll> qu;

	for (int i = 1; i <= n; i++)
	{
		qu.push(i);
	}

	int t = k;

	cout << "<";
	while (!qu.empty())
	{
		int curr = qu.front();
		qu.pop();
		t--;
		if (t != 0) {
			qu.push(curr);
		}
		else {
			cout << curr;
			if (qu.size() > 0)
			{
				cout << ", ";
			}
			t = k;
		}
	}
	cout << ">";
}