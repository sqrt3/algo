#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> players, int m, int k) {
    int added_servers = 0;
    map<int, int> server_expiry;
    int current_servers = 0;

    for (int i = 0; i < players.size(); i++) {
        if (server_expiry.count(i) > 0) {
            current_servers -= server_expiry[i];
            server_expiry.erase(i);
        }

        if (players[i] < m) continue;

        const int required_servers = players[i] / m;
        const int new_servers = max(0, required_servers - current_servers);

        if (new_servers > 0) {
            added_servers += new_servers;
            current_servers += new_servers;

            server_expiry[i + k] += new_servers;
        }
    }

    return added_servers;
}