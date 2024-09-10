#include <iostream>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int start, end, start_cnt = 0, end_cnt = 0;
    int tmp;
    set<int> elem1;
    set<int> elem2;
    cin >> start >> end;
    for (int i = 0; i < start; i++)
    {
        cin >> tmp;
        elem1.insert(tmp);
    }
    for (int i = 0; i < end; i++)
    {
        cin >> tmp;
    	elem2.insert(tmp);
    }
    for (int i : elem1)
    {
        auto it = elem2.find(i);
        if (it != elem2.end())
            start_cnt++;
    }
    for (int i : elem2)
    {
        auto it = elem1.find(i);
        if (it != elem1.end())
            end_cnt++;
    }
    cout << elem1.size() - start_cnt + elem2.size() - end_cnt << "\n";
}
