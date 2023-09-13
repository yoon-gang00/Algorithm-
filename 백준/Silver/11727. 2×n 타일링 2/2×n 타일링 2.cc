#include <iostream>
using namespace std;
int main(){
    int s[1001];
    int n;
    cin >> n;
    s[0]=0;
    s[1]=1;
    s[2]= 3;
    s[3]=5;
    for(int i=4;i<1001;i++){
        s[i] = (s[i-2]*2+s[i-1])%10007;
    }
    cout << s[n];
}