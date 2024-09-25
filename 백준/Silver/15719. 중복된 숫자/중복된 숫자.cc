#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int cnt, sum = 0;
    cin >> cnt;
    for (int i = 0; i < cnt; i++)
    {
        int inp;
    	cin >> inp;
        sum += i;
        sum -= inp;
    }
    cout << abs(sum) << "\n";
    return 0;
}