#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,l;
    cin >> n >> l;
    int arr[1000];
    int x;
    int ans =0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    x = arr[0];
    for(int i=1;i<n;i++){
        if(l<=arr[i]-x){
            ans ++;
            x = arr[i];
        }
    }
    ans ++;
    cout << ans;
    return 0;
    
}