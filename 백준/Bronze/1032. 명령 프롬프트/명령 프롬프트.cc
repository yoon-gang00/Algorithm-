#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s="";
    char arr[50];
    cin >> s;
    for(int i=0;i<s.length();i++){
        arr[i] = s[i];
    }
    for(int i=1;i<n;i++){
        cin >> s;
        for(int j=0;j<s.length();j++){
            if(arr[j]!=s[j])
                arr[j] = '?';
        }
    }
    for(int i=0;i<s.length();i++){
        cout << arr[i];
    }
    return 0;
}