#include <iostream>
using namespace std;
int main() {
    int m;
    cin >> m;
    int arr[4] = {0,1,2,3};
    for(int i=0;i<m;i++){
        int x,y;
        cin >> x >>y;
        swap(arr[x],arr[y]);
    }
    int i=1;
    while(1){
        if(arr[i]==1){
            cout << i << '\n';
            break;
        }
        i++;
    }
}