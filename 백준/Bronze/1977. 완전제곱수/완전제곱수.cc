#include <iostream>
#include <math.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	int min = 0, sum = 0;
	cin >> n >> m;
	for (int i = n; i <= m; i++)
	{
		const int tmp = static_cast<int>(sqrt(i));
		if (tmp * tmp == i)
		{
			if (!min)
				min = i;
			sum += i;
		}
	}
	if (sum && min)
		cout << sum << "\n" << min;
	else
		cout << "-1\n";
	return 0;
}