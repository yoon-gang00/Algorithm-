#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int n = numbers.size();
    
    
        answer = numbers[(k-1)*2%n];
    
    return answer;
}