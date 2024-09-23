#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int cnt, cnt2, inp;
    vector<int> v;
    cin >> cnt;
    for (int i = 0; i < cnt; i++)
    {
        int gap = 0;
        cin >> cnt2;
        for (int j = 0; j < cnt2; j++)
        {
            cin >> inp;
            v.push_back(inp);
        }
        sort(v.begin(), v.end());
        for (int j = v.size() - 1; j > 0; j--)
        {
            if (v[j] - v[j - 1] > gap)
                gap = v[j] - v[j - 1];
        }
        cout << "Class " << i + 1 << "\n";
        cout << "Max " << v[v.size() - 1] << ", Min " << v[0] << ", Largest gap " << gap << "\n";
        v.clear();
    }
}