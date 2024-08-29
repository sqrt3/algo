#include <iostream>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int cnt, hello_cnt = 0;
	string inp;
	cin >> cnt;
	set<string> ent;
	for (int i = 0; i < cnt; i++)
	{
		cin >> inp;
		if (inp == "ENTER") {
			hello_cnt = ent.size() + hello_cnt;
			ent.clear();
		} else if (inp != "ENTER")
			ent.insert(inp);
	}
	hello_cnt = ent.size() + hello_cnt;
	cout << hello_cnt << "\n";
	return 0;
}