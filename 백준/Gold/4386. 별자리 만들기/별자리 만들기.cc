#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <queue>
using namespace std;
float dis(float x1,float y1, float x2, float y2){
    return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
int main() {
   int n;
   cin >> n;
   vector<vector<float>> v(n, vector<float>(2));
   for(int i=0;i<n;i++){
       cin >> v[i][0] >> v[i][1];
   }
   vector<bool> chk(n,0);
   priority_queue<pair<float,int>,vector<pair<float,int>>,greater<pair<float,int>>> pq;
   chk[0] = 1; //첫번째 점 방문
   float ans=0.0;
   
   for(int i=1;i<n;i++){
       pq.push({dis(v[0][0],v[0][1],v[i][0],v[i][1]),i});
   }
   while(!pq.empty()){
       float d = pq.top().first;
       int cur = pq.top().second;
       pq.pop();
       if(chk[cur])
            continue;
    
        ans += d;
        chk[cur] = 1;
        
        for(int i=0;i<n;i++){
            if(!chk[i]){
                pq.push({dis(v[cur][0],v[cur][1],v[i][0], v[i][1]),i});
            }
        }
   }
   cout << fixed << setprecision(2);
   cout << ans;
}