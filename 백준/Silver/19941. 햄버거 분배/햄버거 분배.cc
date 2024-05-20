#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,k;
    int ans=0;
    cin >> n >> k;
    string s;
    cin >> s;
    for(int i=0;i<n;i++){
        if(s[i]=='P'){
            for(int j=i-k;j<=i+k;j++){
                if(j>=0&&j<n&&s[j]=='H'){
                    ans++;
                    s[j]='D';
                    break;
                }
            }
        }
        
    }
    cout << ans<<"\n";
}