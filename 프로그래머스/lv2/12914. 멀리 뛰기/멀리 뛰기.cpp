#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long answer = 0;
    vector<long long> v(n+1,0);
    v[1]=1;
    v[2]=2;
    for(int i=3;i<=n;i++){
        v[i]=v[i-1]+v[i-2];
        v[i]=v[i]%1234567;
        
    }
    return v[n];
}