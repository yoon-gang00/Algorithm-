#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int num[100002];
    for(int i=0;i<n;i++){
        cin >> num[i];
    }
    sort(num,num+n);
    int x;
    cin >> x;
    int a=0;
    int b=n-1;
    int ans=0;
    while(a<b){
        if(num[a]+num[b]==x){
            ans++;
            b--;
        }
        else if(num[a]+num[b]>x){
            b--;
        }
        else{
            a++;
        }
    }
    cout << ans;
}