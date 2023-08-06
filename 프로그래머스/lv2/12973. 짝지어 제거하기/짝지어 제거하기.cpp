#include <iostream>
#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
    int answer = 0;
    if(s.empty()||s.size()%2!=0){
        return answer;
    }
    stack<char> st;
    for(size_t i=0;i<s.size();++i){
        if(st.empty()||st.top()!=s[i]){
            st.push(s[i]);
        }
        else
            st.pop();
    }
    if(st.empty())
        answer++;

    return answer;
}