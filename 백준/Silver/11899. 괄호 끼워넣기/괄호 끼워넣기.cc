#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	string inp;
	cin >> inp;

    size_t pos;
    while ((pos = inp.find("()")) != string::npos) {
        inp.replace(pos, 2, "");
    }

    cout << inp.length() << "\n";
	return 0;
}