#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int pay;
	int dp[100000] = {0};
	cin >> pay;
	for (int i = 1; i <= pay; i++)
	{
		dp[i] = dp[i - 1];
		if (i > 1)
			dp[i] = min(dp[i], dp[i - 2]);
		if (i > 4)
			dp[i] = min(dp[i], dp[i - 5]);
		if (i > 6)
			dp[i] = min(dp[i], dp[i - 7]);
		dp[i]++;
	}
	cout << dp[pay];
	return 0;
}