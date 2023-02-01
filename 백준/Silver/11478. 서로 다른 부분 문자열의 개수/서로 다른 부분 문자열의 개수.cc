#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;
int main(){
    unordered_set<string> set;
    string s;
    cin >> s;
    for(int i=0;i<s.length();i++){
        for(int j=1;j<s.length()-i+1;j++)
            set.insert(s.substr(i,j));
    }
    cout << set.size();
}