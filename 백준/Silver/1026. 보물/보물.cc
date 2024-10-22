#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int cnt;
    int a[50], b[50];

    cin >> cnt;
    for (int i = 0; i < cnt; i++)
        cin >> a[i];
    for (int i = 0; i < cnt; i++)
        cin >> b[i];

    sort(a, a + cnt);
    sort(b, b + cnt, greater<>());

    int sum = 0;
    for (int i = 0; i < cnt; i++)
        sum += a[i] * b[i];

    cout << sum;

    return 0;
}