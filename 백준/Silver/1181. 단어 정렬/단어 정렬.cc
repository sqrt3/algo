#include <iostream>
#include <set>

using namespace std;

struct compare {
    bool operator()(const std::string& a, const std::string& b) const {
        if (a.size() != b.size()) {
            return a.size() < b.size();
        }
        return a < b;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt;
    cin >> cnt;

    set<string, compare> s;
    for(int i = 0; i < cnt; i++)
    {
        string tmp;
        cin >> tmp;
        s.insert(tmp);
    }

    for(const auto& a : s)
    {
        cout << a << "\n";
    }

    return 0;
}
