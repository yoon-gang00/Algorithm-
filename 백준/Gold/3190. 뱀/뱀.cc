#include <iostream>
#include <queue>
#include <deque>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int idx=1;
    int dx[4]={0,1,0,-1};
    int dy[4]={-1,0,1,0};
    int n,k;
    cin >> n >> k;
    int arr[101][101]={0, };
    int ans;
    for(int i=0;i<k;i++){
        int row,col;
        cin >> row >> col;
        arr[row][col]=2;
    }
    int l;
    cin >> l;
    queue<pair<int,char>> q;
    for(int i=0;i<l;i++){
        int x;
        char c;
        cin >> x >> c;
        q.push({x,c});
    }
    arr[1][1]=1;
    deque<pair<int,int>> dq;
    dq.push_back({1,1});
    while(1){
        ans++;
        int tr = dq.back().first + dy[idx];
            int tc = dq.back().second + dx[idx];
        if(tr<=0||tr>n||tc<=0||tc>n||arr[tr][tc]==1){
            break;
        }
        if(arr[tr][tc]!=2){
            arr[dq.front().first][dq.front().second]=0;
            dq.pop_front();
        }
        arr[tr][tc]=1;
        dq.push_back({tr,tc});
        if(ans == q.front().first){
            char tmp = q.front().second;
            if(tmp == 'D'){
                idx = (idx+1)%4;
            }
            else idx = (idx-1+4)%4;
            q.pop();
        }
    }
    cout << ans << '\n';
}