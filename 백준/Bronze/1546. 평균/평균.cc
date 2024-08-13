#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int cnt;
	float sum = 0, highest = 0;
	cin >> cnt;
	float score[1000] = {0,};
	for (int i = 0; i < cnt; i++)
	{
		cin >> score[i];
		highest = max(score[i], highest);
	}
	for (int i = 0; i < cnt; i++)
	{
		score[i] = score[i] / highest * 100;
		sum += score[i];
	}
	cout << sum / cnt << "\n";
}