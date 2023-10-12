#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[1000][5];
    int score[1000];
    for(int i=0;i<n;i++){
        for(int t=0;t<5;t++){
            cin >> arr[i][t];
        }  
    }
    int tmp = 0;
    for(int i=0;i<n;i++){
         for(int j=0;j<5;j++){
             for(int k=j+1;k<5;k++){
                 for(int x=k+1;x<5;x++){
                     score[i] = max(score[i],(arr[i][j]+arr[i][k]+arr[i][x])%10);
                 }
             }
         }
        tmp = max(tmp,score[i]);
    }
      int ans=0;  
    for(int i=0;i<n;i++){
        if(score[i]==tmp){
            ans = i+1;
        }
    }
    cout << ans << '\n';
}