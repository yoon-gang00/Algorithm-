#include <string>
#include <vector>
#include <numeric>
using namespace std;

int solution(vector<int> numbers) {
    int answer = -1;
    int sum =0;
    sum = accumulate(numbers.begin(),numbers.end(),0);
    answer = 45 - sum;
    return answer;
}