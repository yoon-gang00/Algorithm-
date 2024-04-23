#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    
    for(int i=0;i<t;i++){
        int ans=0;
        int a,b;
        cin >> a >> b;
        vector<int> va(a);
        vector<int> vb(b);
        for(int i=0;i<a;i++){
            cin >> va[i];
        }
        for(int i=0;i<b;i++){
            cin >> vb[i];
        }
        sort(vb.begin(),vb.end(),greater<int>());
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(va[i]>vb[j]){
                    ans += b-j;
                    break;
                }
            }
        }
        cout << ans<<"\n";
    }
}