#include <iostream>
using namespace std;
int main(){
    long long s;
    cin >> s;
    long long all =0;
    long long tmp;
    for(auto i=1;i<1e9;i++){
        all +=i;
        if(all>=s){
        tmp  =i;
        break;
        }
    }
    if(all == s)
        cout << tmp;
    else
        cout << tmp-1;
}