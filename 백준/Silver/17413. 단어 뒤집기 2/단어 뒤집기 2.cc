#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int main(){
    char s[100001];
    vector<char> v;
    int j;
    int flag = 0;
    cin.getline(s,100001);
    for(int i = 0;i<strlen(s)+1;i++){
        if(flag == 1){
            if(s[i]=='>')
                flag = 0;
            continue;
        }
        if(s[i]==' '||s[i]=='<'||i==strlen(s)){
            j= i-v.size();
            while(!v.empty()){
                s[j++]=v.back();
                v.pop_back();
            }
            if(s[i]=='<')
                flag = 1;
        }
        else{
            v.push_back(s[i]);
        }
    }
    cout << s << endl;
}