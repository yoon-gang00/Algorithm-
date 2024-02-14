#include <iostream>
using namespace std;
int n,x;
int cnt=0;
int tmp;
int main(){
    cin >> n >> x;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            tmp += a[j];
            if(tmp == x){
                cnt++;
                tmp==0;
                break;
            }
        }
        if(tmp != 0)
            tmp=0;
    }
    cout << cnt;
}