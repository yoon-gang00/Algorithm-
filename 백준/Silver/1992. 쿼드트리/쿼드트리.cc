#include <iostream>
#include <string>
using namespace std;
string v[64];
void result(int size,int y, int x){
    char c = v[y][x];
    for(int i=y;i<y+size;i++){
        for(int j=x;j<x+size;j++){
            if(v[i][j] != c){
                cout << "(";
                result(size/2,y,x);
                result(size/2,y,x+size/2);
                result(size/2,y+size/2,x);
                result(size/2,y+size/2,x+size/2);
                cout << ")";
                return;
            }
        }
    }
    cout << c;
}
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> v[i];
    result(n,0,0);
    return 0;
}