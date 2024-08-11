#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int a, b = 0, c = 0;
	cin >> a;
	if (a % 5 == 0) {
		b = a / 5;
		cout << b << "\n";
		return 0;
	}
	while (a > 0)
	{
		a -= 2;
		c++;
		if (!(a % 5)) { cout << c + a / 5; break; };
	}
	if (a < 0)
		cout << "-1\n";
}