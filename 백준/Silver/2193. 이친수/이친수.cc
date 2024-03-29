#include <iostream>
using namespace std;
int main(){
    int n;
    long ans=0;
    cin >> n;
    long arr[91][2];
    arr[1][0]=0;
    arr[1][1]=1;
    for(int i=1;i<n;i++){
        arr[i+1][0] = arr[i][0]+arr[i][1];
        arr[i+1][1] = arr[i][0];
    }
   ans = arr[n][0] + arr[n][1];
 cout << ans;
}
