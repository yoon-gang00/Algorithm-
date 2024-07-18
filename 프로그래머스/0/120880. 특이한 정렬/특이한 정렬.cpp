#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    
    sort(numlist.begin(),numlist.end(),[n](int a,int b){
        int diffA = abs(a-n);
        int diffB = abs(b-n);
        if(diffA==diffB){
            return a>b;
        }
        return diffA < diffB;
    });
    return numlist;
}