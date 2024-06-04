// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;
int n;
int col[11];
int ans;
void queen(int x){
    if(n==x){
        ans++;
    }else{
        for(int i=0;i<n;i++){
            col[x] = i;
            bool can = 1;
            for(int j=0;j<x;j++){
                if(col[x]==col[j]||abs(col[x]-col[j])==x-j){
                    can = false;
                    break;
                }
            }
            if(can){
                queen(x+1);
            }
        }   
    }
}
int main() {
    int t;
    cin >>t;
    for(int i=1;i<=t;i++){
        ans =0;
        cin >> n;
        queen(0);
        cout << "#"<<i<<" "<<ans<<"\n";
    }
}