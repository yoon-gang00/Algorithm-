#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;
set<int> num;
bool prime(int number){
    if(number==0||number==1)
        return false;
    int t = sqrt(number);
    for(int i=2;i<=t;i++){
        if(number%i==0)
            return false;
    }
    return true;
}
void plusString(string plus,string other){
    if(plus != ""){
        num.insert(stoi(plus));
    }
    for(int i=0;i<other.size();i++){
        plusString(plus+other[i],other.substr(0,i)+other.substr(i+1));
    }
}
int solution(string numbers) {
    plusString("",numbers);
    int answer=0;
    for(int number:num)
        if(prime(number))
            answer++;
    return answer;

}