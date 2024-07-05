#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    vector<int> v;
    vector<int> order;
    for(int i=0;i<array.size();i++){
        v.push_back(abs(n-array[i]));
        order.push_back(abs(n-array[i]));
    }
    
    int close_n=101;
    sort(order.begin(),order.end());
    for(int i=0;i<v.size();i++){
        if(order[0]==v[i]){
            if(array[i]<close_n){
                close_n = array[i];
            }
        }
    }
    answer = close_n;
    return answer;
}