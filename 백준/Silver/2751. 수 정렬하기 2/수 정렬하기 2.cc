#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int a, c;
	cin >> a;
	std::vector<int> b;
	for (int i = 0; i < a; i++) {
		cin >> c;
		b.push_back(c);
	}
	sort(b.begin(), b.end());

	for (int i = 0; i < a; i++)
	{
		cout << b[i] << "\n";
	}
}