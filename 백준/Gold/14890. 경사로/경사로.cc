// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
 int n, l;
 int ans=0;
void solve(int row,vector<vector<int>>& map){
    int tmp = map[row][0];
    vector<bool> v(n,0);
    for(int col = 1; col < n ;col++){
        if(abs(tmp - map[row][col])>1)
            return;
        if(tmp<map[row][col]){
            for(int i=col-l;i<col;i++){
                if(i<0||v[i]){
                    return;
                }
                v[i]=1;
            }
        }
        else if(tmp > map[row][col]){
            for(int i=col;i<col+l;i++){
                if(i>=n||v[i]){
                    return;
                }
                v[i]=1;
            }
        }
        tmp = map[row][col];
    }
    //return이 안된거면 조건에 만족하는거니까 ans 증가
    ans++;
}
int main() {
    
    cin >> n >> l;
    vector<vector<int>> wid(n,vector<int>(n));
    vector<vector<int>> hei(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            //가로 줄, 세로 줄 저장
            cin >> wid[i][j];
            hei[j][i] = wid[i][j];
        }
    }
    for(int i=0;i<n;i++){
        solve(i,wid);
        solve(i,hei);
    }
    cout << ans << "\n";
    
}