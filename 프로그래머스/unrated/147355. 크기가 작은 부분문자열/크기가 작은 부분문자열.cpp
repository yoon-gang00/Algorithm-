#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int n;
    n=t.length()-p.length()+1;
    int pl=p.length();
    for(int i=0;i<n;i++){
        string tmp = t.substr(i,pl);
        long a;
        a= stol(tmp);
        long pl = stol(p);
        if(a<=pl)
            answer +=1;
    }
    return answer;
}