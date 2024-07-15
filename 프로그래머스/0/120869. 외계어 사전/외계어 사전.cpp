#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

int solution(vector<string> spell, vector<string> dic) {
        for (const auto& word : dic) {
        unordered_set<char> word_set(word.begin(), word.end());
        bool all_found = true;
        for (const auto& letter : spell) {
            if (word_set.find(letter[0]) == word_set.end()) {
                all_found = false;
                break;
            }
        }
        if (all_found) {
            return 1;
        }
    }
    return 2;
}