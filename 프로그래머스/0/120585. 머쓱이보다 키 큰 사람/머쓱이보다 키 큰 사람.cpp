#include <string>
#include <vector>
using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    array.push_back(height);\
    for(int i=0;i<array.size();i++){
        if(array[i]>height){
            answer++;
        }
    }
    return answer;
}