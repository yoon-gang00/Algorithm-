#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[9];
    int sev[7];
    int sum =0;
    for(int i=0;i<9;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr,arr+9);
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            if(sum == 100 + arr[i]+arr[j]){
                for(int t=0;t<9;t++){
                    if(i == t || j == t){
                        continue;
                    }
                    cout << arr[t] << '\n';
                }
                return 0;
            }
        }
    }
    return 0;
}