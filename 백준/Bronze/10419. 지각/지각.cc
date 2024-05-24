#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int d;
        cin >> d;
        int a=0,b=0;
        while(1){
            if(d<a+b){
                b--;
                break;
            }
            b++;
            a = b*b;
        }
        cout << b << "\n";
    }
}