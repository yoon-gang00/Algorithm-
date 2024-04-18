#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
   int t;
   cin >> t;
   for(int i=0;i<t;i++){
       string s;
       cin >> s;
       int n = s.length();
       int x = sqrt(n);
       string ans="";
       for(int j=x-1;j>=0;j--){
           for(int k=0;k<x;k++){
               ans += s[k*x+j];
           }
       }
       cout << ans<<"\n";
       
   }
}