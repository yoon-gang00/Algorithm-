#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int max1=-10001,max2=-10001;
    int min1= 10001,min2=10001;
    for(int num: numbers){
        if(num>max1){
            max2= max1;
            max1=num;
        }
        else if(num>max2){
            max2=num;
        }
        if(num<min1){
            min2= min1;
            min1=num;
        }else if(num<min2){
            min2=num;
        }
    }
    return max(max1*max2,min1*min2);
}