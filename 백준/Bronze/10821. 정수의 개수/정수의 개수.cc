#include <string>
#include <iostream>
using namespace std;
int main(){
    int answer=1;
   string s;
    getline(cin,s);
    string find_s=",";
    for(int i=0;i<s.size();i++){
        if(s.find(find_s)==-1)
            break;
        else if(s.find(find_s,i)<=i){
            answer++;
        }
    }
    cout << answer;
}