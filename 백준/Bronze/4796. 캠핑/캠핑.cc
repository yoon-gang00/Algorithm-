#include <iostream>
using namespace std;
int main(){
     int n=1;
    while(1){
        int l,p,v;
        cin >> l >> p >> v;
        if(l==0&&p==0&&v==0){
            break;
        }
        int ans=0;
        if(v%p<=l){
            ans = (v/p)*l+(v%p);
            cout << "Case "<< n << ": "<<ans<<"\n";
            n++;
        }
        else{
            ans = (v/p)*l+l;
            cout << "Case "<< n << ": "<< ans<<"\n";
            n++;
        }
        
    } 
}