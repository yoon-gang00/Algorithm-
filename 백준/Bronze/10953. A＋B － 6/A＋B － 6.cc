#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        int a = s[0]+s[2]-'0'-'0';
        cout << a<<"\n";
    }
}