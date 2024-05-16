#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
const ll MX = 201010;
const ll INF = 1e18;
#define FIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
struct Node
{
	Node* prev;
	Node* next;
	char c;
};
int main()
{

	int tc;
	cin >> tc;

	while (tc--) {
		Node* head = new Node();

		Node* current = head;
		current->prev = nullptr;
		current->next = nullptr;

		string s;
		cin >> s;

		for (int i = 0; i < s.size(); i++)
		{
			char cmd = s[i];

			// 노드 추가
			if (cmd == '>')
			{
				if (current->next != nullptr)
				{
					current = current->next;
				}
			}
			else if (cmd == '<')
			{
				if (current != head)
				{
					current = current->prev;
				}
			}
			// 
			else if (cmd == '-')
			{
				if (current == head)
				{
					continue;
				}
				else if (current->next == nullptr)
				{
					current->prev->next = nullptr;
					current = current->prev;
				}
				else
				{
					auto prv = current->prev;
					auto nxt = current->next;

					prv->next = nxt;
					nxt->prev = prv;
					current = prv;
				}
			}
			else
			{
				Node* pNode = new Node();
				pNode->c = cmd;
				pNode->prev = current;
				pNode->next = current->next;
				if (current->next != nullptr)
				{
					current->next->prev = pNode;
				}
				current->next = pNode;
				current = pNode;
			}
		}


		head = head->next;

		while (head != nullptr)
		{
			cout << head->c;
			head = head->next;

		}
		cout << "\n";
	}

}