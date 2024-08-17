#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	string inp;
	cin >> inp;

	int q;
	cin >> q;

	vector<vector<int>> cnt(26, vector<int>(inp.size() + 1, 0));

	for (int i = 0; i < inp.size(); ++i) {
		int idx = inp[i] - 'a';
		for (int j = 0; j < 26; ++j) {
			cnt[j][i + 1] = cnt[j][i];
		}
		cnt[idx][i + 1]++;
	}

	while (q--) {
		char f;
		int start, end;
		cin >> f >> start >> end;

		int idx = f - 'a';
		int result = cnt[idx][end + 1] - cnt[idx][start];

		cout << result << "\n";
	}

	return 0;
}