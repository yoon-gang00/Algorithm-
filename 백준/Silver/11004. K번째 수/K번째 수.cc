#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    cout << v[k-1];
}