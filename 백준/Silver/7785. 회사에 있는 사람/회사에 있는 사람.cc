#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
   int n;
   cin >> n;
   map <string,int> m;
   vector <string> v;
   while(n--){
       string name,st;
       cin >> name >> st;
       if(st=="leave"){
            m[name]=0;
       }
       else{
           m[name]=1;
       }
       
   }
   for(auto a : m){
       if(a.second){
           v.push_back(a.first);
       }
   }
   sort(v.rbegin(),v.rend());
   for(auto a:v){
       cout << a << "\n";
   }
}