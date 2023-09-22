#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <limits.h>
using namespace std;
int n,m;
int minCity = INT_MAX;
vector<pair<int,int>> home;
vector<pair<int,int>> chicken;
vector<int> selects;
void distance(){
    int cityDistance=0;
    for(int i=0;i<home.size();i++){
        int minHome = INT_MAX;
        for(int j=0;j<chicken.size();j++){
            if(selects[j] == 1){
                int homeDistance = abs(home[i].first - chicken[j].first)+abs(home[i].second - chicken[j].second);
                if(homeDistance < minHome){
                    minHome = homeDistance;
                }
            }
        }
        cityDistance += minHome;
    }
    if(cityDistance < minCity){
        minCity = cityDistance;
    }
}
void select() {
    for(int i=0; i<chicken.size()-m;i++){
        selects.push_back(0);
    }
    for(int i=0;i<m;i++){
        selects.push_back(1);
    }
    do{
        distance();
    }while(next_permutation(selects.begin(),selects.end()));
}
int main(){
    scanf("%d %d",&n,&m);
    int tmp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&tmp);
            if(tmp == 1){
                home.push_back({i,j});
            }
            if(tmp == 2){
                chicken.push_back({i,j});
            }
        }
    }
    select();
    cout << minCity;
    return 0;
}