#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int n;
vector<pair<int,int>> v;
double ans;
long long out(pair<long long, long long> x,pair<long long, long long>y){
    return x.first*y.second - x.second*y.first;
}
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        int a,b;
        cin >>a>>b;
        v.push_back({a,b});
    }
    for(int i=1;i<n-1;i++){
        ans +=(double)(out({v[i].first-v[0].first,v[i].second-v[0].second},{v[i+1].first-v[0].first,v[i+1].second-v[0].second})/2.0);
    }
    printf("%.1lf",abs(ans));
}