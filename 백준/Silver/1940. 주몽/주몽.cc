#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, cnt = 0;
    vector<int>v;

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    int b = 0, e = n - 1;
    while (b < e)
    {
        if (v[b] + v[e] == m)
        {
            cnt++;
            b++;
            e--;
        }
        else if (v[b] + v[e] > m)
            e--;
        else
            b++;
    }
    cout << cnt << "\n";
    return 0;
}