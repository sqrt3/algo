#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt, customer;
    cin >> cnt >> customer;

    vector<int> prices(customer);
    for (int i = 0; i < customer; i++) {
        cin >> prices[i];
    }

    sort(prices.rbegin(), prices.rend());

    int max_profit = 0, max_egg_price = 0;

    for (int i = 0; i < customer; i++) {
        int buyer_cnt = min(cnt, i + 1);
        int profit = prices[i] * buyer_cnt;

        if (profit > max_profit) {
            max_profit = profit;
            max_egg_price = prices[i];
        }
    }

    cout << max_egg_price << " " << max_profit << "\n";
    return 0;
}
