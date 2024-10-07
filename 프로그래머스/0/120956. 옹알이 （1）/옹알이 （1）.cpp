#include <iostream>
#include <string>
#include <vector>
#include <regex>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> can_say = {"aya", "ye", "woo", "ma"};
    regex re("^_+$");

    for (auto& i : babbling)
    {
	    for (auto &word : can_say)
	    {
            if (i.find(word) != string::npos)
            {
	            i.replace(i.find(word), word.length(), "_");
            }
	    }
    }

    for (auto& i : babbling)
    {
        auto it = sregex_iterator(i.begin(), i.end(), re);
        auto end = sregex_iterator();

        while (it != end) {
            answer++;
            ++it;
        }
    }
    return answer;
}