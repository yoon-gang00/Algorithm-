// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    string s;
    while(1){
         getline(cin, s);
         if(s=="END"){
             break;
         }
        reverse(s.begin(),s.end());
        cout << s << "\n";
        
    }
   
}