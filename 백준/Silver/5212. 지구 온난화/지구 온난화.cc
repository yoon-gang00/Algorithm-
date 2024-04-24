#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int r,c;
    cin >> r >> c;
    vector<vector<char>> v1(r,vector<char>(c,'.'));
    vector<vector<char>> chk(r,vector<char>(c,0));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> v1[i][j];
            if(i==0)
                chk[i][j]++;
            if(j==0)
                chk[i][j]++;
            if(i==r-1)
                chk[i][j]++;
            if(j==c-1) 
                chk[i][j]++;
        }
    }
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if( i-1>=0&&v1[i-1][j]=='.')
                chk[i][j]++;
            if(i+1<r&&v1[i+1][j]=='.' )
                chk[i][j]++;
            if(j-1>=0&&v1[i][j-1]=='.' )
                chk[i][j]++;
            if(j+1<c&&v1[i][j+1]=='.' )
                chk[i][j]++; 
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(chk[i][j]>=3){
                v1[i][j]='.';
            }
        }
    }
    int min_x=c, min_y=r;
    int max_x=0, max_y=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(v1[i][j]=='X'){
                min_y=min(i,min_y);
                min_x=min(j,min_x);
                max_x=max(j,max_x);
                max_y=max(i,max_y);
            }
        }
    }
    for(int i=min_y;i<max_y+1;i++){
        for(int j=min_x;j<max_x+1;j++){
            cout << v1[i][j];
        }
        cout << '\n';
    }
    
}