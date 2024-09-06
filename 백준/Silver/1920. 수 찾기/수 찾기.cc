#include <iostream>
#include <set>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int cnt;
    int inp, chk;
    set<int> num;
    cin >> cnt;
    for (int i = 0; i < cnt; i++)
    {
        cin >> inp;
        num.insert(inp);
    }
    cin >> chk;
    for (int i = 0; i < chk; i++)
    {
        cin >> inp;
        if (num.count(inp))
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
