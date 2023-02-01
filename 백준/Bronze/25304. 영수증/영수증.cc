using namespace std;
#include <iostream>
int main(){
    int x;
    cin >> x;
    int n;
    cin >> n;
    int ans=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        ans += a*b;
    }
    if(ans == x)
    {
        cout << "Yes";
    }
    else
        cout << "No";
}