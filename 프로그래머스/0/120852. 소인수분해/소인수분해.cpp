#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    vector<int> v;
    while(n%2==0){
        v.push_back(2);
        n/=2;
    }
    for(int i=3;i*i<=n;i+=2){
        while(n%i==0){
            v.push_back(i);
            n/=i;
        }
    }
    if(n>2){
        v.push_back(n);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    
    return v;
}