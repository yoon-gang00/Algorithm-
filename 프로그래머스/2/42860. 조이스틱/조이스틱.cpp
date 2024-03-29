#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(string name) {
    int answer = 0;
    int alpha[26] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,12,11,10,9,8,7,6,5,4,3,2,1};
    int n = name.size();
    int move = n-1;
    for(int i=0;i<n;i++){
        answer += alpha[name[i]-'A'];
        
        int tmp=i+1;
        while(name[tmp]=='A'&&tmp<n)
            tmp++;
        move = min(move,i+n-tmp+min(i,n-tmp));
    }
    answer+=move;
    return answer;
}