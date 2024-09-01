#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
    int n;
    int cnt =0;
    int arr[1000001];
    vector<int> v;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    v.push_back(arr[1]);
    for(int i=2;i<=n;i++){
        if(v[cnt]<arr[i]){
            v.push_back(arr[i]);
            cnt++;
        }else{
            int tmp = lower_bound(v.begin(),v.end(),arr[i])-v.begin();
            v[tmp] =arr[i];
            
        }
    }
    cout << v.size();
}