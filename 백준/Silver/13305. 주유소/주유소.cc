#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt;
    long long sum = 0;
    cin >> cnt;

    int dist[100000], price[100000];

    for (int i = 0; i < cnt - 1; ++i) {
        cin >> dist[i];
    }
    for (int i = 0; i < cnt; ++i) {
        cin >> price[i];
    }

    for (int i = 0; i < cnt - 1; ++i) {
        if (price[i] < price[i + 1]) {
            price[i + 1] = price[i];
        }
        sum += price[i] * dist[i];
    }

    cout << sum;
    return 0;
}
