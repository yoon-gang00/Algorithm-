#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,e,f;
    cin >> a>>b>>c>>d>>e>>f;
    int x,y;
    y=(c*d-f*a)/(b*d-e*a);
    x=(c*e-b*f)/(a*e-b*d);
    cout <<x << ' '<<y;
}