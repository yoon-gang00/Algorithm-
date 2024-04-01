#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;
bool cmp(string &a,string &b){
    if(a.size()==b.size()){
        int asum=0,bsum=0;
        for(char c:a){
            if(isdigit(c)){
                asum+=c-'0';
            }
        }
        for(char c:b){
            if(isdigit(c)){
                bsum+=c-'0';
            }
        }
        if(asum == bsum){
            return a<b;
        }
        else {
            return asum < bsum;
        }
    }
    else
        return a.size()<b.size();
}
int main(){
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++){
        cout << v[i]<<"\n";
    }
}