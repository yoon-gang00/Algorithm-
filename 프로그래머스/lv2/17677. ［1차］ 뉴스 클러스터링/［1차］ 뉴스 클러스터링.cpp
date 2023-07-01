#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    int max=0, min=0;
    vector<string> v1;
    vector<string> v2;
    transform(str1.begin(),str1.end(),str1.begin(),::tolower);
    transform(str2.begin(),str2.end(),str2.begin(),::tolower);
    for(int i=0;i<str1.size()-1;i++){
        string t = str1.substr(i,2);
        if(t[0]>='a'&&t[0]<='z'&&t[1]>='a'&&t[1]<='z'){
            v1.push_back(t);
        }
    }
     for(int i=0;i<str2.size()-1;i++){
        string t = str2.substr(i,2);
        if(t[0]>='a'&&t[0]<='z'&&t[1]>='a'&&t[1]<='z'){
            v2.push_back(t);
        }
    }
    if(v1.empty()&&v2.empty()){
        return 65536;
    }
    max = v1.size() +v2.size();
    if(v1.size()>v2.size()){
        for(int i=0;i<v2.size();i++){
            auto x = find(v1.begin(),v1.end(),v2[i]);
            if(x != v1.end()){
                min ++;
                v1.erase(x);
            }
        }
    }
    else{
        for(int i=0;i<v1.size();i++){
            auto x = find(v2.begin(), v2.end(),v1[i]);
            if(x != v2.end()){
                min ++;
                v2.erase(x);
            }
        }
    }
    max -= min;
    if(max == 0)
        return 65536;
    double a = (double)min/(double)max;
    return a*65536;
}