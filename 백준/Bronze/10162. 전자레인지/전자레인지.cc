#include <iostream>
using namespace std;

int main() {
	long n;
	long a = 0, b = 0 , c = 0;
	cin >> n;
	if (n % 10 != 0)
	{
		printf("-1\n", n);
		return 0;
	}
	a = n / 300;
	n = n % 300;
	b = n / 60;
	n = n % 60;
	c = n / 10;

	printf("%ld %ld %ld",a, b, c);
}