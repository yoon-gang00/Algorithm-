#include <string>
#include <vector>

using namespace std;
bool three(int num){
    string numStr = to_string(num);
    return numStr.find('3') != string::npos;
}
int solution(int n) {
    int num= 0;
    int count = 0;
    while(count < n){
        num++;
        bool mul = (num%3==0);
        bool x = three(num);
        if(!mul && !x){
            count++;
        }
    }
    return num;
}