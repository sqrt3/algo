#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int line_cnt;
	string x, y;
	cin >> line_cnt;
	for (int i = 0; i < line_cnt; i++) {
		cin >> x >> y;
		if (x == y) cout << "OK\n";
		else cout << "ERROR\n";
	}
}