// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int dp[10001]={0, }; 
        int n;
        cin >> n;
        vector<int> v(n);
        for(int j=0;j<n;j++){
            cin >> v[j];
        }
        int m;
        cin >> m;
        dp[0]=1; //0원 만드는법 1가지
        for(int i=0;i<n;i++){
            for(int j=v[i];j<=m;j++){
                dp[j] += dp[j-v[i]];
            }
        }
        cout << dp[m]<<"\n";
        
    }
}