#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    int t = s.length()/10 + 1;
    for(int i=0;i<t;i++){
        cout << s.substr(10*i,10) << "\n";
    }
}