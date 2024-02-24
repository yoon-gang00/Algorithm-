#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int m = -1;
    int sum =0;
    int ans =0;
    while(next_permutation(v.begin(),v.end())){
        sum=0;
        for(int i=0;i<v.size()-1;i++){
            sum += abs(v[i]-v[i+1]);
        }
        ans = max(ans,sum);
        
    }
    cout << ans;
}