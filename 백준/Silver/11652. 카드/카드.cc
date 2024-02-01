#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<long long> v;
    for(int i=0;i<n;i++){
        long long a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    long long x = v[0];
    int cnt = 0;
    int max = 0;
    for(int i=0;i<n-1;i++){
        if(v[i]==v[i+1])
            cnt++;
        else cnt =0;
        if(cnt > max){
            max = cnt;
            x = v[i];
        }
    }
    cout << x << "\n";
}