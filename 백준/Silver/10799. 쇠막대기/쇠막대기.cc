#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(){
    stack<char> s;
    string input;
    int total = 0;
    cin >> input;
    for(int i=0;i<input.length();i++){
        if(input[i]=='('){
            s.push(input[i]);
        }
        else if(input[i]==')' and input[i-1]=='('){
            s.pop();
            total += s.size();
        }
        else{
            total ++;
            s.pop();
        }
    }
    cout <<total <<endl;
}