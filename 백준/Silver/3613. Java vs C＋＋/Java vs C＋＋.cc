#include <iostream>
#include <string>
using namespace std;

bool err_chk(string str)
{
	if (str[0] == '_')
	{
		cout << "Error!\n";
		return true;
	}
	if (str[str.length() - 1] == '_')
	{
		cout << "Error!\n";
		return true;
	}
	if (str.find("__") != string::npos)
	{
		cout << "Error!\n";
		return true;
	}
	if (isupper(str[0]))
	{
		cout << "Error!\n";
		return true;
	}
	if (str.find('_') != string::npos)
	{
		for (const char i : str)
		{
			if (isupper(i))
			{
				cout << "Error!\n";
				return true;
			}
		}
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	string inp;
	bool is_cpp = false;
	cin >> inp;
	if (err_chk(inp))
		return 0;
	if (inp.find('_') != string::npos)
		is_cpp = true;
	if (is_cpp)
	{
		size_t pos;
		while((pos = inp.find('_')) != string::npos)
		{
			inp.erase(pos, 1);
			inp[pos] = inp[pos] - 0x20;
		}
	} else {
		for (int i = 0; i < inp.length(); i++)
		{
			if (inp[i] >= 0x41 && inp[i] <= 0x5A)
			{
				inp[i] += 0x20;
				inp.insert(i, "_");
			}
		}
	}
	cout << inp << "\n";
	return 0;
}