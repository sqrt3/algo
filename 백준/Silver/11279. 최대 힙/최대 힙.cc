#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int cnt, inp, outcnt = 0;
	priority_queue<int> queue;
	cin >> cnt;
	for (int i = 0; i < cnt; i++)
	{
		cin >> inp;
		if (inp != 0) {
			queue.push(inp);
		} else if (queue.empty()) {
			cout << "0\n";
		} else if (inp == 0) {
			cout << queue.top() << "\n";
			queue.pop();
		}
	}
}