#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int Solution(priority_queue<int,vector<int>,greater<int>> &q, int n){
    int ans=0;
    for(int i=0;i<n-1;i++){
        int x = q.top();
        q.pop();
        int y = q.top();
        q.pop();
        int sum = x+y;
        ans += sum;
        q.push(sum);
    }
    return ans;
}
int main(){
    priority_queue<int,vector<int>,greater<int>> q;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int num;
        cin >>num;
        q.push(num);
    }
    cout << Solution(q,n);
    return 0;
}