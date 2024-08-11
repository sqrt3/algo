#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int a, b, c;
	vector<int> d;
	cin >> a >> b;
	for (int i = 0; i < a; i++)
	{
		cin >> c;
		d.push_back(c);
	}
	sort(d.begin(), d.end());
	cout << d[b - 1] << "\n";
}