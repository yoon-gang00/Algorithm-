#include <iostream>
#include <map>
using namespace std;
map<int,bool> m;
int N,M;
int t;
int main(void){
    cin >> N >> M;
    for(int i=0;i<N+M;i++)
    {
        cin >> t;
        if(m[t]==1)
            m.erase(t);
        else
            m[t] = 1;
    }
    cout << m.size();
}