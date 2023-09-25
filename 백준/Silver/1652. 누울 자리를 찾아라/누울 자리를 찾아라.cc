#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n;
    cin >> n;
    int map[101][101];
    char k;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> k;
            if(k=='.')
                map[i][j]=1;
            else map[i][j]=0;
        }
    }
    int rownum =0;
    int row=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(map[i][j]==1)
                rownum++;
            else rownum=0;
            
            if(rownum==2)
                row++;
        }
        rownum=0;
    }
    int col=0;
    int colnum =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(map[j][i]==1)
                colnum++;
            else colnum =0;
            
            if(colnum==2)
                col++;
        }
        colnum =0;
    }
    cout << row << " " << col;
    return 0;
}