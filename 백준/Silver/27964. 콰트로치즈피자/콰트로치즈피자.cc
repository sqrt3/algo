#include <iostream>
#include <set>
#include <sstream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int cnt;
	string inp;
	set<string> s;
	cin >> cnt;
	cin.ignore();

	getline(cin, inp);
	istringstream ss(inp);

	string buf;

	while (getline(ss, buf, ' '))
	{
		if (buf.find("Cheese", buf.length() - 6) != string::npos)
			s.insert(buf);
	}
	
	if (s.size() >= 4)
		cout << "yummy\n";
	else
		cout << "sad\n";

	return 0;
}