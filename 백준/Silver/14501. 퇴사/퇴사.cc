#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int i,j;
    int x[18],y[18],z[18]={0, };
    cin >> i;
    for(j=1;j<=i;j++){
        cin >> x[j] >> y[j];
    }
    for(j=i;j>0;j--){
        if(x[j]>i-j+1){
            z[j] = z[j+1];
        }
        else if(y[j]+z[j+x[j]]>z[j+1])
            z[j] = y[j]+z[j+x[j]];
        else z[j] = z[j+1]; 
    }
    cout << z[1];
}