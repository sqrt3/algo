#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int cnt;
	int ans = 0;
	cin >> cnt;
	int ppl[1000] = { 0 };
	for (int i = 0; i < cnt; i++)
		cin >> ppl[i];
	sort(ppl, ppl + cnt);

	for (int i = 0; i < cnt; i++)
		ans += ppl[i] * (cnt - i);

	cout << ans << "\n";
	return 0;
}