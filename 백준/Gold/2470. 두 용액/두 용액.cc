#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long arr[100001];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int left=0;
    int right= n-1;
    long long tmp;
    long long arrL = arr[left];
    long long arrR = arr[right];
    long long ans = arrL+arrR;
    while(left<right){
        tmp = arr[left]+arr[right];
        if(abs(ans)>abs(tmp)){
            ans = tmp;
            arrL = arr[left];
            arrR = arr[right];
        }
        if(tmp <= 0){
            left++;
        }
        else{
            right--;
        }
    }
    cout << arrL << " " << arrR;
    return 0;
}