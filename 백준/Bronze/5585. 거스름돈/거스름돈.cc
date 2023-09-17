#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans;
    ans = (1000-n)/500 + ((1000-n)%500)/100 + ((1000-n)%100)/50 + ((1000-n)%50)/10 + ((1000-n)%10)/5 + (1000-n)%5;
    cout << ans;
}