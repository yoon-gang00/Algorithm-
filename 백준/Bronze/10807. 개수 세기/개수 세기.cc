#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int num;
    int arr[201]={};
    for(int i=0;i<n;i++){
        cin  >> num;
        arr[num+100]++;
    }
    int v;
    cin >> v;
    cout << arr[v+100];
}