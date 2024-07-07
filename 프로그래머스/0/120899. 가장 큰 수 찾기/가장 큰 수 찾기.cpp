#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    vector<int> v;
    for(int i=0;i<array.size();i++){
        v.push_back(array[i]);
    }
    sort(v.begin(),v.end(),greater<int>());
    for(int i=0;i<array.size();i++){
         if(v[0]==array[i]){
             answer.push_back(array[i]);
             answer.push_back(i);
         }
    }
   
    return answer;
}