#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n,0);
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin >>v[i];
    }
    for(int i=0;i<n;i++){
        int cnt=v[i];
        int pos = 0;
        while(cnt >0||ans[pos]!=0){
            if(ans[pos]==0){
                cnt--;
            }
            pos++;
        }
        ans[pos]=i+1;
    }
    for(int i=0;i<n;i++){
        cout << ans[i] << " ";
    }
}