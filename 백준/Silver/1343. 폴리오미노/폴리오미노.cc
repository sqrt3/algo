#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	string a;
	cin >> a;
	int b = count(a.begin(), a.end(), 'X');
	if (b % 2 == 1)
	{
		cout << "-1\n";
		return 0;
	}
	while (true) {
		if (a.find("XXXX") != string::npos)
			a.replace(a.find("XXXX"), 4, "AAAA");
		else if (a.find("XX") != string::npos) { a.replace(a.find("XX"), 2, "BB"); }
		else break;
	}
	if (a.find('X') != string::npos)
	{
		cout << "-1\n";
		return 0;
	}
	cout << a << "\n";
}