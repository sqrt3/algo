#include <iostream>
#include <vector>
using namespace std;

int gcd(int x, int y)
{
    if (y == 0) return x;
    return gcd(y, x % y);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int cnt;
    vector<int> v;
    cin >> cnt;
    for (int i = 0; i < cnt; i++)
    {
        int inp;
        cin >> inp;
        v.push_back(inp);
        if (i > 0)
        {
            int num = gcd(v[0], v[i]);
            cout << v[0] / num << "/" << v[i] / num << "\n";
        }
    }
    return 0;
}