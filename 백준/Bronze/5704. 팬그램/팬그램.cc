#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string input;
	while (true) {
		getline(cin, input);
		if (input == "*") {
			break;
		}

		int chk[26] = { 0 };
		bool is_pangram = true;

		for (const char ch : input) {
			if (ch >= 'a' && ch <= 'z') {
				chk[ch - 'a']++;
			}
		}

		for (const int i : chk)
		{
			if (i == 0) {
				is_pangram = false;
				break;
			}
		}

		cout << (is_pangram ? "Y" : "N") << "\n";
	}
}