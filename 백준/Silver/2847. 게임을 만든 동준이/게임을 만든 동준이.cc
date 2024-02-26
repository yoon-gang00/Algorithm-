#include <iostream>
using namespace std;
int n;
int ans=0;
int arr[101];
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=n-1;i>=1;i--){
        while(arr[i]<=arr[i-1]){
            arr[i-1]--;
            ans++;
        }
    }
    cout <<ans;
}