#include <algorithm>
#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> m(n);

    for (int i = 0; i < n; i++) {
        cin >> m[i];
    }

    sort(m.begin(), m.end());
    int cnt = 0;
    unordered_set<int> found;

    for (int i = 0; i < n; i++) {
        int b = 0, e = n - 1;
        while (b < e) {
            if (b == i) { b++; continue; }
            if (e == i) { e--; continue; }

            const int sum = m[b] + m[e];
            if (sum == m[i]) {
                cnt++;
                found.insert(m[i]);
                break;
            }

            if (sum < m[i]) {
                b++;
            }
            else {
                e--;
            }
        }
    }

    cout << cnt;

    return 0;
}
