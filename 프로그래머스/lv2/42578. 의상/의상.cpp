#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<vector<string>> clothes) {
   
    unordered_map<string, int> map;
    for(vector<string> v : clothes)
        map[v[1]]++;
    int answer = 1;
    for(auto x = map.begin(); x!=map.end();x++)
        answer *= x->second +1;
    return answer -1;
}