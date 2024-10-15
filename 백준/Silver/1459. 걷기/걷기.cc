#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x, y, w, s;
    cin >> x >> y >> w >> s;

    if (w * 2 <= s) {
        cout << (x + y) * w << "\n";
        return 0;
    }

    const long long min_dir = min(x, y);
    const long long diagonal = abs(x - y);
    long long total = min_dir * s;

    if (w > s) {
        total += diagonal % 2 == 0 ? diagonal * s : (diagonal - 1) * s + w;
    }
    else {
        total += diagonal * w;
    }

    cout << total << "\n";
    return 0;
}