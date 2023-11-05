#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> q;
    int n,k;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        q.push(i+1);
    }
    cout << "<";
    while(q.size()>1){
        for(int i=0;i<k-1;i++){
            int tmp;
            tmp = q.front();
            q.pop();
            q.push(tmp);
        }
        cout << q.front()<<", ";
        q.pop();
    }
    cout <<q.front()<< ">\n";
}