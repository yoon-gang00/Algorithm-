#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t,n;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        vector<pair<int,int>> v;
        for(int j=0;j<n;j++){
            int a,b;
            cin>>a>>b;
            v.push_back({a,b});
        }
        sort(v.begin(),v.end());
        int tmp=0;
        int rst=1;
        for(int j=1;j<n;j++){
            if(v[tmp].second>v[j].second){
                rst++;
                tmp=j;
            }
        }
        cout << rst << "\n";
    }
}