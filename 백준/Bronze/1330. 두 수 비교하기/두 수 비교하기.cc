using namespace std;
#include <iostream>
int main(){
    int a, b;
    cin >> a >> b;
    if(a>b){
        cout << ">";
    }
    else if(a<b){
        cout << "<";
    }
    else
        cout << "==";
}