#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer={0,0};
    int max_x=board[0]/2;
    int min_x=-board[0]/2;
    int max_y=board[1]/2;
    int min_y=-board[1]/2;
    for(int i=0;i<keyinput.size();i++){
        if(keyinput[i]=="left"){
            if(answer[0]>min_x && answer[0]<=max_x){
                answer[0]--;
            }
        }else if(keyinput[i]=="right"){
            if(answer[0]>=min_x && answer[0]<max_x){
                answer[0]++;
            }
        }else if(keyinput[i]=="up"){
            if(answer[1]>=min_y && answer[1]<max_y){
                answer[1]++;
            }
            
        }else if(keyinput[i]=="down"){
            if(answer[1]>min_y && answer[1]<=max_y){
                answer[1]--;
            }
        }
    }
    return answer;
}