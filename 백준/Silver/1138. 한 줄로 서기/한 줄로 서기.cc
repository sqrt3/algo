#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt;
    cin >> cnt;

    vector<int> h(cnt);
    vector<int> v(cnt, 0);
    deque<int> pos;

    for (int i = 0; i < cnt; ++i) {
        cin >> h[i];
        pos.push_back(i);
    }

    for (int i = 0; i < cnt; ++i) {
        int fill_idx = h[i] + 1;
        int idx = pos[fill_idx - 1];
        v[idx] = i + 1;
        pos.erase(pos.begin() + fill_idx - 1);
    }

    for (int i = 0; i < cnt; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
