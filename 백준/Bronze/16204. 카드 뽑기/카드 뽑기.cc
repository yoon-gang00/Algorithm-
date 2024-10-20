#include <iostream>
using namespace std;
int main() {
    int m,n,k;
    cin >> n >> m >> k;
    int ans = 0;
    if(m>=k){
        ans += k;
        ans += n-m;
    }
    else{
        ans += m;
        ans += n-k;
    }
    cout << ans;
}