#include <iostream>
#include <stack>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >>s;
    double values[26];
    for(int i=0;i<n;i++){
        cin >> values[i];
    }
    stack<double> st;
    for(char c : s){
        if(isalpha(c)){
            //연산자가 아니라면
            st.push(values[c-'A']);
        }
        else{ //연산자라면
            double b = st.top();
            st.pop();
            double a = st.top();
            st.pop();
            if(c=='+'){
                st.push(a+b);
            }else if(c=='-'){
                st.push(a-b);
            }else if(c=='*'){
                st.push(a*b);
            }else if(c=='/'){
                st.push(a/b);
            }
        }
    }
    cout << fixed<<setprecision(2) << st.top() << endl;
}