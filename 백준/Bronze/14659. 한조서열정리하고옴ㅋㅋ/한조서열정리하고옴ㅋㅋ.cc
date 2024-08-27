#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int cnt;
	cin >> cnt;
	int height, max_height = 0, cur_cnt = 0, best_cnt = 0;
	for (int i = 0; i < cnt; i++)
	{
		cin >> height;
		if (max_height < height)
		{
			max_height = height;
			cur_cnt = 0;
		}
		else
		{
			cur_cnt++;
			if (best_cnt < cur_cnt)
				best_cnt = cur_cnt;
		}
	}
	cout << best_cnt;
	return 0;
}