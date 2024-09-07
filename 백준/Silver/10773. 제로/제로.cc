#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int cnt, inp, res = 0;
    vector<int> v;
    cin >> cnt;
    for (int i = 0; i < cnt; i++)
    {
        cin >> inp;
        if (inp != 0)
            v.push_back(inp);
        else
            v.pop_back();
    }
    for (const int num : v)
        res += num;
    cout << res << "\n";
    return 0;
}
