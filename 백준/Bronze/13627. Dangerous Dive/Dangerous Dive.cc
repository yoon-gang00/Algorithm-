
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, r;
    cin >> n >> r;
    vector<int> v;
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }
    for(int i=0;i<r;i++){
        int x;
        cin >> x;
        v.erase(remove(v.begin(),v.end(),x),v.end());
    }
    sort(v.begin(),v.end());
    if(v.size()==0){
        cout << '*';
    }
    else{
        for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
        }
    }
    
}