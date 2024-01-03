#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    set<int> s(nums.begin(),nums.end());
    if(nums.size()/2>s.size())
        answer = s.size();
    else
        answer = nums.size()/2;
    return answer;
}