#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string inp;
    int tmp = 0;
    cin >> inp;
    for (char i : inp)
	    tmp += i - '0';

    if (inp.find('0') == string::npos || tmp % 3 != 0)
    {
	    cout << "-1\n";
        return 0;
    }

    sort(inp.begin(), inp.end(), greater<>());
    cout << inp << "\n";

    return 0;
}
