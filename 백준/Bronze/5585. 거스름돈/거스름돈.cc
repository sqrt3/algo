#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int exc[] = { 500, 100, 50, 10, 5, 1 };
	int paid, cnt = 0;
	cin >> paid;
	paid = 1000 - paid;
	while (paid) {
		for (int i = 0; i < 6; i++) {
			if (paid / exc[i]) {
				cnt += paid / exc[i];
				paid %= exc[i];
			}
		}
	}
	cout << cnt << "\n";
}