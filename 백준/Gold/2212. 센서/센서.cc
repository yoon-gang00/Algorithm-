#include <iostream>
#include <algorithm>
using namespace std;
long long n,k,ans = 0;
long long sensor[10001];
long long facility[10001];
int main(){
    cin >> n >> k;
    for(long long i=1;i<=n;i++){
        cin >> sensor[i];
    }
    sort(sensor+1,sensor+n+1);
    for(long long i=1;i<n;i++){
        facility[i]= sensor[i+1]-sensor[i];
    }
    sort(facility+1, facility+n, greater<>());
    for(long long i=k;i<n;i++){
        ans += facility[i];
    }
    cout << ans;
}