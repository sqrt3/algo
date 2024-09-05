#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <math.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt;
    int inp;
    int avg = 0;
    vector<int> vec;
    unordered_map<int, int> freqMap;

    cin >> cnt;
    for (int i = 0; i < cnt; i++) {
        cin >> inp;
        vec.push_back(inp);
        avg += inp;
        freqMap[inp]++;
    }
    avg = round(static_cast<float>(avg) / cnt);

    sort(vec.begin(), vec.end());

    vector<pair<int, int>> freqVec;
    freqVec.reserve(freqMap.size());
    for (const auto& entry : freqMap) {
        freqVec.emplace_back(entry.second, entry.first);
    }

    sort(freqVec.begin(), freqVec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first == b.first) return a.second < b.second;
        return a.first > b.first;
        });

    vector<int> most;
    const int freq = freqVec[0].first;
    for (const auto& entry : freqVec) {
        if (entry.first == freq) {
            most.push_back(entry.second);
        }
        else {
            break;
        }
    }
    
    cout << round(avg) << "\n";
    cout << vec[vec.size() / 2] << "\n";
    if (most.size() < 2) {
        cout << most[0] << "\n";
    }
    else {
        cout << most[1] << "\n";
    }
    cout << vec[vec.size() - 1] - vec[0] << "\n";

    return 0;
}
