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

	ll A, B, V;

	cin >> A >> B >> V;


	cout << (V - A) / (A - B) + (((V-A) % (A-B)) > 0) + 1;



}