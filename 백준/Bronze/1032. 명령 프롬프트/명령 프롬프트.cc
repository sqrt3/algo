#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	string inp;
	string out;
	bool saved = false;
	int cnt;
	cin >> cnt;
	for (int i = 0; i < cnt; i++)
	{
		cin >> inp;
		size_t len = inp.length();
		if (!saved)
		{
			out = inp;
			saved = !saved;
		}
		for (int j = 0; j < len; j++)
		{
			if (inp[j] != out[j])
			{
				out.erase(j, 1);
				out.insert(j, "?");
			}
		}
	}
	cout << out;
	return 0;
}