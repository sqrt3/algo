#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    const unordered_set<char> colors = { 'r', 'o', 'y', 'g', 'b', 'i', 'v' };
    unordered_set<char> found_lower, found_upper;

    int cnt;
    cin >> cnt;

    char inp;
    for (int i = 0; i < cnt; i++) {
        cin >> inp;

        if (colors.count(inp)) {
            found_lower.insert(inp);
        }
        else if (colors.count(tolower(inp))) {
            found_upper.insert(tolower(inp));
        }
    }

    if (found_lower.size() == 7 && found_upper.size() == 7) {
        cout << "YeS\n";
    }
    else if (found_upper.size() == 7) {
        cout << "YES\n";
    }
    else if (found_lower.size() == 7) {
        cout << "yes\n";
    }
    else {
        cout << "NO!\n";
    }

    return 0;
}
