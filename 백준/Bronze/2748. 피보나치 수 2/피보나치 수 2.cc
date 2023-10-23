#include <iostream>
#include <vector>
using namespace std;
long long arr[100] = {0,1,};
long long fibo(int n){
    if(n==0||n==1){
        return arr[n];
    }
    else if(arr[n]==0){
        arr[n] = fibo(n-1)+fibo(n-2);
    }
    return arr[n];
}
int main(){
    int n;
    cin >> n;
    cout << fibo(n);
}