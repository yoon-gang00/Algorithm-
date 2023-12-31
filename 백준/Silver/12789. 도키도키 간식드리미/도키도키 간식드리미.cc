#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    int n,t;
    int cnt =1;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> t;
        if(t==cnt){
            cnt++;
        }
        else{
            s.push(t);
        }
        while(!s.empty()&&s.top()==cnt){
            s.pop();
            cnt++;
        }
    }
    if(s.empty())
        cout << "Nice"<<"\n";
    else
        cout << "Sad"<<"\n";
}