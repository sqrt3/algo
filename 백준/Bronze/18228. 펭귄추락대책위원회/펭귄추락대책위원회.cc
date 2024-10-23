#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, idx = 0;
    int x = 0, y = 0;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        a.push_back(ai);
        if (ai == -1)
            idx = i;
    }
    if (idx >= 0 && idx < a.size()) {
        auto minIt = std::min_element(a.begin(), a.begin() + idx);

        if (minIt != a.begin() + idx) {
            x = *minIt;
        }
    }
    if (idx >= 0 && idx < a.size()) {
        auto minIt = std::min_element(a.begin() + idx + 1, a.end());

        if (minIt != a.end()) {
            y = *minIt;
        }
    }

    cout << x + y << "\n";

    return 0;
}