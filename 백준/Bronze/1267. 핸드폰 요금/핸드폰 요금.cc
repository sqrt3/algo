#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int cnt, sec, yprice = 0, mprice = 0;
	cin >> cnt;
	for (int i = 0; i < cnt; i++) {
		cin >> sec;
		yprice += sec / 60 * 15 + 15;
		mprice += sec / 30 * 10 + 10;
	}
	if (mprice < yprice)
	{
		cout << "Y " << mprice << "\n";
		return 0;
	}
	if (mprice > yprice)
	{
		cout << "M " << yprice << "\n";
		return 0;
	}
	if (mprice == yprice)
	{
		cout << "Y M " << mprice << "\n";
		return 0;
	}
}