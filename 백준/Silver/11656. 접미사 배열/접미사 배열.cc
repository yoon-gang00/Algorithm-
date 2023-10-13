#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string s;
    vector<string> v;
    cin >> s;
    int sl = s.length();
    for(int i=0;i<sl;i++){
        string tmp;
        tmp = s.substr(i,sl);
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<sl;i++){
        cout << v[i] << "\n";
    }
}