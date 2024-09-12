#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

bool chk(const string& str, const string& chars)
{
    return any_of(chars.begin(), chars.end(), [&str](const char c)
    {
        return str.find(c) != string::npos;
    });
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    const string invalid = "acefghjklmnrstuyz";
	while (true)
	{
        string inp;
        cin >> inp;

        if (inp == "#")
            break;

        if (chk(inp, invalid))
        {
            cout << "INVALID\n";
        }
        else
        {
            for (int i = inp.length() - 1; i >= 0; i--)
            {
                if (inp[i] == 'b')
                    cout << 'd';
                else if (inp[i] == 'd')
                    cout << 'b';
                else if (inp[i] == 'p')
                    cout << 'q';
                else if (inp[i] == 'q')
                    cout << 'p';
                else
                    cout << inp[i];
            }
            cout << "\n";
        }
	}
    return 0;
}
