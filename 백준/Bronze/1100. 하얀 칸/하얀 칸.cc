#include <iostream>
using namespace std;
int main(){
    int cnt=0;
    char ch[8][8];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>ch[i][j];
            if(((i+j)%2==0)&&ch[i][j]=='F'){
                cnt++;
            }
        }
    }
    cout << cnt;
}