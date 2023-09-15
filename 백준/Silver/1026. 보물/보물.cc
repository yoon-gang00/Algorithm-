#include <iostream>
#include <algorithm>
using namespace std;
bool cpr(int x, int y){
    if(x>y)
        return true;
    else
        return false;
}
int main(){
    int n;
    cin >> n;
    int* a = new int[n];
    int* b = new int[n];
    int sum = 0;
    
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    sort(a,a+n,cpr);
    sort(b,b+n);
    for(int i=0;i<n;i++){
        sum += a[i]*b[i];
    }
    cout << sum << endl;
    
    return 0;
}