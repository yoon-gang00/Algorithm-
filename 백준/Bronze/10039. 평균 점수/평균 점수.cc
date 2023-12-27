#include <iostream>
using namespace std;
int main(){
    int ans=0;
    for(int i=0;i<5;i++){
        int tmp;
        cin >>tmp;
        if(tmp<=40){
            ans += 40;
        }
        else{
            ans += tmp;
        }
    }
    cout << ans/5;
}