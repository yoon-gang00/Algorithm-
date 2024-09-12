#include <iostream>
#include <map>
#include <string>
#include <sstream>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string,int> cnt;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        
        size_t pos = s.find_last_of(".");
        if(pos != string::npos){
            string tmp = s.substr(pos+1);
            cnt[tmp]++;
        }
    }
    for(auto &pair : cnt){
        cout << pair.first << " " << pair.second << endl;
    }
    return 0;
}