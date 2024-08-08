#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    long long k;
    int a = 0;
    int ans = 0;

    cin >> n >> k;
    int b = k;

    while (a <= b) {
        int m = (a + b) / 2;
        int cnt = 0;

        for (int i = 1; i < n + 1; i++)
            cnt += min(m / i, n);

        if (cnt >= k) {
            ans = m;
            b = m - 1;
        } else {
            a = m + 1;
        }
    }

	cout << ans << "\n";
    return 0;
}