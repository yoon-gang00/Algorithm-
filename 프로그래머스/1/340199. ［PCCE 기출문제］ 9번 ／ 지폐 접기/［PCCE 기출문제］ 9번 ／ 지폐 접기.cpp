#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int solve(vector<int>& wallet, vector<int>& bill,int answer){
    if(wallet[0] >= bill[0] && wallet[1]>=bill[1]){
        return answer;
    }
    if(bill[0]>=bill[1]){
        bill[0]/=2;
    }
    else{
        bill[1]/=2;
    }
    sort(bill.begin(),bill.end(),greater<int>());
    return solve(wallet, bill, answer+1);
}
int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    sort(bill.begin(),bill.end(),greater<int>());
    sort(wallet.begin(),wallet.end(),greater<int>());
    
    
    
    return solve(wallet,bill,0);
}