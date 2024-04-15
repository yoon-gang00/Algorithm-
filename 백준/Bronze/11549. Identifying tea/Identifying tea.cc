#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    int ans=0;
    for(int i=0;i<5;i++){
        int x;
        cin >> x;
        if(x==t){
            ans++;
        }
    }
    cout << ans;
}