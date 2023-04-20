#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string left ="";
    string right ="";
    for(int i=1;i<food.size();i++){
        int count = food[i]/2;
        if(count >0){
            for(int j = 0;j<count;j++){
                left = left + to_string(i);
                right = to_string(i) + right;
            }
        }
    }
    answer = left + "0" + right;
    
    return answer;
}