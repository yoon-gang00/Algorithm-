#include <iostream>
#include <stack>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,h;
    cin >> n;
    stack<pair<int,int>> st;
    for(int i=1;i<=n;i++){
        cin >> h;
        int idx = i;
        if(!st.empty()){
            while(h>st.top().second){
                st.pop();
                if(st.empty()){
                    break;
                }
            }
        }
        if(st.empty()){
            cout << "0 ";
            st.push({idx,h});
            continue;
        }
        cout << st.top().first << ' ';
        st.push({idx,h});
    }
}