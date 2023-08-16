#include <string>
#include <vector>

using namespace std;

int solution(string name) {
    int answer = 0;
    int n = name.length();
    int x = n-1;
    for(int i=0;i<n;i++){
        if(name[i]-'A'<14)
            answer += name[i] - 'A';
        else answer += 'Z' - name[i] +1;
        
        int y = i+1;
        while(y<n && name[y]=='A')
            y++;
        x = min(x,i+n-y+min(i,n-y));
    }
    answer += x;
    return answer;
}