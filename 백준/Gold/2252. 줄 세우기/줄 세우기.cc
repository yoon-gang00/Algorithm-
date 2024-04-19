#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;
int n,m;
int arr[100001];
vector<int> v[100001];
int main() {
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        arr[b]++;
        v[a].push_back(b);
    }
    queue<int> q;
    for(int i=1;i<=n;i++){
        if(arr[i]==0)
            q.push(i);
    }
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        cout << cur << " ";
        for(int i=0;i<v[cur].size();i++){
            int next = v[cur][i];
            arr[next]--;
            if(arr[next]==0)
                q.push(next);
        }
    }
    cout << endl;
}