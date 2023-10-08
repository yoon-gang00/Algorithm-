#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t,n;
    cin >> t;
    vector<int> v(12,0); //12개의 요소 모두 0으로 초기화
    v[1] =1;
    v[2]=2;
    v[3] = 4;
    for(int i=4;i<12;i++){
        v[i] = v[i-1] + v[i-2] + v[i-3];
    }
    for(int i=0;i<t;i++){
        cin >> n;
        cout << v[n] << "\n";
    }
}