#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int alp[26]={0, };
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        int tmp=1;
        for(int j=s.length()-1;j>=0;j--){
            
            alp[s[j]-'A']+=tmp;
            tmp=tmp*10;
        }
    }
    sort(alp,alp+26,greater<>());
    int x=9;
    int ans=0;
    for(int i=0;i<26;i++){
        if(alp[i]==0)
            break;
        ans += alp[i]*x;
        x--;
    }
    cout << ans << "\n";
}