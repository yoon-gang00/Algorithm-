
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
bool cmp(string a,string b){
    unordered_map<char,char> m;
    unordered_map<char,bool> check;
    for(int i=0;i<a.size();i++){
          if(!m[a[i]] && !check[b[i]]){
              m[a[i]]=b[i];
              check[b[i]] = 1;
          }
          else{
              if(m[a[i]]!=b[i]){
                  return false;
              }
          }
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i=0;i<n;i++){
       cin >> v[i];
    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(cmp(v[i],v[j])){
                ans++;
            }
        }
    }
    cout << ans << "\n";
}