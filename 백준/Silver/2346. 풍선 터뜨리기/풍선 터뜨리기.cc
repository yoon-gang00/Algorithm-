#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "1" << " ";
    int next = v[0];
    v[0] = 0;
    int cnt = 0;
    for(int i=1;i<v.size();i++){
        int tmp = next;
        if(next>0){
            while(tmp>0){
                cnt++;
                if(cnt >v.size()-1){
                    cnt = 0;
                }
                if(v[cnt]!=0){
                    tmp--;
                }
            }
        }
        else{
            tmp *= -1;
            while(tmp >0){
                cnt = cnt -1;
                if(cnt <0){
                    cnt = v.size()-1;
                }
                if(v[cnt]!=0){
                    tmp--;
                }
            }
        }
        next = v[cnt];
        v[cnt] =0;
        cout << cnt+1<<" ";
    }
    return 0;
}
