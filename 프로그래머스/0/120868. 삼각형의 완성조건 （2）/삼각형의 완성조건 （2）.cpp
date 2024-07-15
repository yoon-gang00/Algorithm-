#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> sides) {
    sort(sides.begin(),sides.end());
    int c = sides[0]+sides[0] -1;
        
    return c;
}