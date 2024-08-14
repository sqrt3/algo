#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	float t;
	cin >> t;
	cout << fixed;
	cout.precision(2);
	cout << t / 4 << "\n";
}