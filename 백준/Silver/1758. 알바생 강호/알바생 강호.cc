#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	long long cnt, tip, total = 0;
	cin >> cnt;
	vector<int> t;

	for (int i = 0; i < cnt; i++)
	{
		cin >> tip;
		t.push_back(tip);
	}

	sort(t.begin(), t.end(), greater<>());

	for (int i = 0; i < cnt; i++)
	{
		if (t[i] - i > 0)
			total += t[i] - i;
	}

	cout << total << "\n";

	return 0;
}