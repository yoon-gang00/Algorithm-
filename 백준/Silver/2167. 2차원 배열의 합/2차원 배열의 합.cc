#include <iostream>
using namespace std;
long long gr[301][301];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin >> n >> m;
    gr[0][0]=0;
    gr[0][1]=0;
    gr[1][0]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> gr[i][j];
            gr[i][j] =gr[i][j] + gr[i][j-1]+gr[i-1][j]-gr[i-1][j-1];
        }
    }
    int k;
    cin >> k;
    for(int i=0;i<k;i++){
        int x,y,z,w;
        cin >> x >> y >> z >> w;
        cout << gr[z][w] - gr[x-1][w] - gr[z][y-1] + gr[x-1][y-1]<<"\n";
    }
    return 0;
}