#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    int sum =0;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(v[i]>sum+1){
            break;
        }
        sum += v[i];
    }
    cout << sum+1;
    return 0;
}