#include <iostream>
using namespace std;
int main(){
    int e,s,m;
    cin >> e >> s >> m;
    int y =1;
    while(1){
        int a,b,c;
        a = y-e;
        b = y-s;
        c = y-m;
        if(a%15==0 && b%28==0 && c%19==0)
            break;
        y++;
    }
    cout << y << "\n";
}