#include <iostream>
#include <cstring>
using namespace std;
int arr[52][52];
bool check[52][52];
int dx[]={-1, 1, 0, 0, -1, 1, -1, 1};
int dy[]={0, 0, 1, -1, -1, -1, 1, 1};
int a,b;
void dfs(int y, int x){
    check[y][x]=1;
    for(int i=0;i<8;i++){
        int n_x = x + dx[i];
        int n_y = y + dy[i];
        if(n_y<0||n_x<0||n_y>=b||n_x>=a){
            continue;
        }
            if(check[n_y][n_x]==0&&arr[n_y][n_x]==1){
            check[n_y][n_x]=1;
            dfs(n_y,n_x);
        }
        
        
    }
}
void reset(){
    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            arr[i][j]=0;
            check[i][j]=0;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    while(1){
        reset();
        cin >> a >> b;
        if(a==0 && b==0)
            break;
            
        for(int i=0;i<b;i++){
            for(int j=0;j<a;j++){
                cin >> arr[i][j];
            }
        }
        
        int cnt=0;
        for(int i=0;i<b;i++)
        {
            for(int j=0;j<a;j++){
                if(arr[i][j]==1 && check[i][j]==0){
                    dfs(i,j);
                    cnt++;
                }
            }
        }  
        cout << cnt<<"\n";
       
    }
}