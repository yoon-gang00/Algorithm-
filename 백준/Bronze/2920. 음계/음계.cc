#include <iostream>
using namespace std;
int main(){
    int arr[8];
    int tmp=0;
    for(int i=0;i<8;i++){
        cin >> arr[i];
        if(arr[i]==i+1){
            tmp++;
        }
        else if(arr[i]==8-i){
            tmp--;
        }
    }
    if(tmp == 8)
        cout << "ascending";
    else if(tmp == -8)
        cout << "descending";
    else
        cout << "mixed";
}