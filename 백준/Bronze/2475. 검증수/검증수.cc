#include <iostream>
using namespace std;
int main(){
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    int ans;
    ans = (arr[0]*arr[0]+arr[1]*arr[1]+arr[2]*arr[2]+arr[3]*arr[3]+arr[4]*arr[4])%10;
    cout << ans;
}