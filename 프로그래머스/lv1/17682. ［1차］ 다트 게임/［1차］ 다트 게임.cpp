#include <string>
#include <vector>
using namespace std;

int solution(string dartResult) {
    int answer = 0;
    string n ="";
    int idx=0;
    vector<int> v;
    for(int i=0;i<dartResult.size();i++){
        char c = dartResult[i];
        if(c>='0'&&c<='9'){
            n += c;
        }
        else if(c=='S')
        {
            v.push_back(stoi(n));
            n = "";
            idx++;
        }
        else if(c=='D')
        {
            int x = stoi(n);
            v.push_back(x*x);
            n = "";
            idx++;
        }
        else if(c=='T')
        {
            int x = stoi(n);
            v.push_back(x*x*x);
            n = "";
            idx++;
        }
        else if(c=='*'){
            if(idx==1)
                v[idx-1] *=2;
            else{
                v[idx-1]*=2;
                v[idx-2]*=2;
            }
        }
        else if(c=='#'){
            v[idx-1] = -v[idx-1];
        }
    }
    for(int j=0;j<idx;j++){
        answer += v[j];
    }
    return answer;
}