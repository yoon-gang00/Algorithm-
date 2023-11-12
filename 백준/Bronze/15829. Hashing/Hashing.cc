#include <iostream>
#include <string>
using namespace std;
int main(){
    long long n;
    string s;
    long long r=31;
    long long m=1234567891;
    long long ans=0;
    cin >> n >> s;
    for(long long i=0;i<n;i++){
        char alp = s[i];
        alp -= ('a'-1);
        long long x = 1;
        for(int j=1;j<=i;j++){
            x *= 31;
            if(x>m)
                x %= m;
        }
        ans += (long long)alp * x;
        if(ans > m)
            ans %= m;
    }
    cout << ans;
}