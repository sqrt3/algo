#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		for (int j = 1; j < a - i; j++)
			cout << " ";
		for (int j = 0; j < i + i + 1; j++)
			cout << "*";
		cout << "\n";
	}
	for (int i = 1; i < a; i++) {
		for (int j = 1; j < i + 1; j++)
			cout << " ";
		for (int j = 2 * (a - i) - 1; j > 0; j--)
			cout << "*";
		cout << "\n";
	}
}