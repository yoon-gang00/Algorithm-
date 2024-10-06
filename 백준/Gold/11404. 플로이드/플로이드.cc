// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,m;
    cin >> n;
    cin >> m;
    int arr[n][n];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                arr[i][j]=0;
            }else {
                arr[i][j] = 1e9;
            }
        }
    }
    for(int i=0;i<m;i++){
        int d,a,c; //departure, arrival, cost
        cin >> d >> a>>c;
        arr[d-1][a-1] = min(arr[d-1][a-1],c);
        
        
    }
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                 if (arr[i][k] < 1e9 && arr[k][j] < 1e9) { // 경유할 수 있는 경우만
                    arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
                }
            }
        }
    }
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            if (arr[i][j] == 1e9) {
                cout << 0 << " "; // 이동 불가한 경우 0 출력
            } else {
                cout << arr[i][j] << " "; // 최소 비용 출력
            }
        }
        cout << endl;
    }
}