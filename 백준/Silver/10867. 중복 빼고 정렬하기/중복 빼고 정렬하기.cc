#include <iostream>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int cnt, inp;
    set<int> s;
    cin >> cnt;
    for (int i = 0; i < cnt; i++)
    {
        cin >> inp;
        s.insert(inp);
    }
    for (int i : s)
        cout << i << " ";
}