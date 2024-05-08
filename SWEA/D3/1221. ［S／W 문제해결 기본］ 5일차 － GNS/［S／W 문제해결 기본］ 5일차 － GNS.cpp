#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
string st[10]={"ZRO","ONE","TWO","THR","FOR","FIV","SIX","SVN","EGT","NIN"};
int main(int argc, char** argv)
{
    int test_case;
    int T;
 
    cin>>T;
 
    for(test_case = 1; test_case <= T; ++test_case)
    {
        string s,t;
        int n;
        int cnt[10]={0,};
        cin>> t>>n;
        for(int i=0;i<n;i++){
            cin >> s;
            if(s=="ZRO"){
                cnt[0]++;
            }
            else if(s=="ONE"){
                cnt[1]++;
            }
            else if(s=="TWO"){
                cnt[2]++;
            }
            else if(s=="THR"){
                cnt[3]++;
            }
            else if(s=="FOR"){
                cnt[4]++;
            }
            else if(s=="FIV"){
                cnt[5]++;
            }
            else if(s=="SIX"){
                cnt[6]++;
            }
            else if(s=="SVN"){
                cnt[7]++;
            }
            else if(s=="EGT"){
                cnt[8]++;
            }
            else if(s=="NIN"){
                cnt[9]++;
            }
             
        }
        cout << t << "\n";
        for(int i=0;i<10;i++){
            if(cnt[i]!=0){
                for(int j=0;j<cnt[i];j++){
                    cout << st[i] << " ";
                }
            }
        }
            cout << "\n";
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}