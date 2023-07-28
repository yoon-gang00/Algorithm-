#include <iostream>
#include <algorithm>
using namespace std;

int tree[100000];
int dis[100000];

int gcd(int a, int b){
    int g = a % b;
    if(g==0)
        return b;
    else
        return gcd(b,g);
}
int main(){
    int n;
    int g=0;
    int cnt =0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >>  tree[i];
    }
    sort(tree, tree+n);
    
    for(int i=0;i<n-1;i++){
        dis[i] = tree[i+1] - tree[i];
    }
    
    g = dis[0];
    for(int i=1;i<n-1;i++){
        g = gcd(g,dis[i]);
    }
    for(int i=0;i<n-1;i++){
        cnt += (dis[i]/g)-1;
    }
    cout << cnt;
    return 0;
}