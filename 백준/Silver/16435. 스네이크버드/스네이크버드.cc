#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n,l;
    cin >> n >> l;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(v[i]<=l){
            l++;
        }
    }
    cout << l;
}