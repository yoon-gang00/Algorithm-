#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
    int n,m;
    int arr[32001];
    vector<int> v[32001];
    cin >> n >> m;
    for(int i=0;i<=m;i++){
        int a,b;
        cin >> a >>b;
        v[a].push_back(b);
        arr[b]++;
    }
    priority_queue<int> q;
    for(int i=1;i<=n;i++){
        if(arr[i]==0)
            q.push(-i);
    }
    while(q.empty()==0){
        int tmp =- q.top();
        q.pop();
        cout << tmp << " ";
        for(int i=0;i<v[tmp].size();i++){
            int next = v[tmp][i];
            arr[next]--;
            if(arr[next]==0)
                q.push(-next);
        }
    }
    cout << '\n';
}