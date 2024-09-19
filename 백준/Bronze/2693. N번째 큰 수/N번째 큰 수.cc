#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int cnt, inp;
    vector<int> v;
    cin >> cnt;
    for (int i = 0; i < cnt; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> inp;
            v.push_back(inp);
        }
        sort(v.begin(), v.end(), greater<>());
        cout << v[2] << "\n";
        v.clear();
    }
}