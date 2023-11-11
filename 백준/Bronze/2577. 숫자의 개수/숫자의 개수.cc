#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int n = a*b*c;
    int arr[10] = {0, };
    while(n > 0){
        arr[n % 10]++;
        n = n / 10;
    }
    for(int i=0;i<10;i++){
        cout << arr[i] << "\n";
    }
}
