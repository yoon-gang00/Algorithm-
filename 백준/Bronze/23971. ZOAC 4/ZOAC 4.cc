#include <iostream>
using namespace std;
int main() {
    int h,w,n,m;
    cin >> h >> w >> n >> m;
    int x,y;
    if(h%(n+1)==0){
        x = h/(n+1);
    }
    else{
        x =  h/(n+1)+1;
    }
    if(w%(m+1)==0){
        y = w/(m+1);
    }
    else{
        y = w/(m+1)+1;
    }
    cout << x*y << "\n";
}