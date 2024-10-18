#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a[45] = { 0, 1 };
    int b[45] = { 1, 1 };
    int inp;
    cin >> inp;
    for (int i = 2; i < inp; i++)
    {
        a[i] = b[i - 1];
        b[i] = a[i - 1] + b[i - 1];
    }
    cout << a[inp - 1] << " " << b[inp - 1];
    return 0;
}