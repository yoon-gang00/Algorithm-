#include <iostream>
using namespace std;
long long pibo[41];
int main(){
    pibo[1]=pibo[2]=1;
    for(int i=3;i<41;i++)pibo[i]=pibo[i-1]+pibo[i-2];
    int n;
    cin >> n;
    cout << pibo[n] << ' ' << n-2;
}