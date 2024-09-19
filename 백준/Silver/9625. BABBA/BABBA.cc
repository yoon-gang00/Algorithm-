
#include <iostream>
using namespace std;
int main() {
    int k;
    cin >> k;
    int a=1,b=0;
    for(int i=0;i<k;i++){
        int new_a = b;
        int new_b = a+b;
        a = new_a;
        b = new_b;
    }
    cout << a<<" " <<b;
}
