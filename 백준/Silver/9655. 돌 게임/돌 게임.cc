#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int inp;
	cin >> inp;
	if (inp % 2)
		cout << "SK\n";
	else
		cout << "CY\n";
	return 0;
}