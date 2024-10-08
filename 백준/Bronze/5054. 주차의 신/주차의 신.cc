#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_cases;
    cin >> test_cases;

    for (int i = 0; i < test_cases; i++)
    {
        int store_cnt, total_dist = 0;
        cin >> store_cnt;
        vector<int> dist(store_cnt, 0);
        for (int j = 0; j < store_cnt; j++)
            cin >> dist[j];
        sort(dist.begin(), dist.end());
        for (int j = 0; j < store_cnt - 1; j++)
            total_dist += dist[j + 1] - dist[j];
        cout << total_dist * 2 << "\n";
    }

    return 0;
}