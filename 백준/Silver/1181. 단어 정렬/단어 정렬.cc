#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MX = 1010;
const ll INF = 1e18;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
vector<pair<ll, string>> v;
int main()
{
	FIO;

	ll n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		v.push_back({ s.size(),s });
	}

	sort(v.begin(), v.end());

	string prv = "";
	for (auto x : v)
	{
		if (prv == x.second) continue;
		cout << x.second << "\n";
		prv = x.second;
	}
}