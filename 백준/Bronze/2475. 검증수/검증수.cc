#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int a, b = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> a;
		b += pow(a, 2);
	}
	cout << b % 10 << "\n";
}