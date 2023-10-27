#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    int alp[26]={0,};
    for(int i=0;i<s.length();i++){
        int tmp;
        tmp = s[i]-97;
        alp[tmp]+=1;
    }
    for(int i=0;i<26;i++){
        cout << alp[i] << " ";
    }
}