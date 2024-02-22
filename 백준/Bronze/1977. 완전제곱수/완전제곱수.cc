#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int min=0;
    int sum=0;
    int x=0;
    while(x*x <=m){
        if(x*x>= n){
            sum += x*x;
            if(min ==0){
                min = x*x;
            }
        }
        x++;
    }
    if(sum ==0)
        cout << -1 << "\n";
    else{
        cout << sum << "\n";
        cout << min << "\n";
    }
}