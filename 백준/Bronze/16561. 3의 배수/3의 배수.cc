#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int a, b, c = 0;
	cin >> a;
	b = a / 3;
	for (int i = 1; i < b - 1; i++)
	{
		c += i;
	}
	cout << c << "\n";
}