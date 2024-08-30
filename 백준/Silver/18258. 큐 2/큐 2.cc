#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int cnt;
	string inp;
	queue<int> q;
	cin >> cnt;
	cin.ignore();
	for (int i = 0; i < cnt; i++)
	{
		getline(cin, inp);
		if (inp.find("push") != string::npos)
		{
			inp.erase(inp.find('p'), 5);
			q.push(stoi(inp));
		}
		if (inp == "pop") {
			if (q.empty())
			{
				cout << "-1\n";
			}
			else {
				cout << q.front() << "\n";
				q.pop();
			}
		}
		if (inp == "front")
		{
			if (q.empty())
				cout << "-1\n";
			else
				cout << q.front() << "\n";
		}
		if (inp == "back")
		{
			if (q.empty())
				cout << "-1\n";
			else
				cout << q.back() << "\n";
		}
		if (inp == "size")
			cout << q.size() << "\n";
		if (inp == "empty")
			cout << q.empty() << "\n";
	}
	return 0;
}