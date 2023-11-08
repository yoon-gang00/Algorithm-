#include <iostream>
#include <vector>
#include <queue>
using namespace std;
priority_queue<int> maxq;
priority_queue<int, vector<int>, greater<int>> minq;
int main(void){
    int n,t;
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> t;
        if(i==0)
            maxq.push(t);
        else if(i==1){
            if(t>maxq.top()){
                minq.push(t);
            }
            else{
                minq.push(maxq.top());
                maxq.pop();
                maxq.push(t);
            }
        }
        else{
            maxq.push(t);
            if(maxq.top()>minq.top()){
                maxq.pop();
                minq.push(t);
                if(minq.size()>maxq.size()){
                    maxq.push(minq.top());
                    minq.pop();
                }
            }
            if(maxq.size()-minq.size()>1){
                minq.push(maxq.top());
                maxq.pop();
            }
        }
        cout << maxq.top() << '\n';
    }
    return 0;
}