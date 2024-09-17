#include <iostream>
#include <vector>
using namespace std;
int main(){
    int x,y;
    cin >> x >> y;
    vector<int> v;
    for(int i=1;v.size()<=1000;i++){
        for(int j=0;j<i;j++){
            v.push_back(i);
            if(v.size()>1000)
                break;
        }
    }
    int sum =0;
    for(int i=x-1;i<y;i++){
        sum += v[i];
    }
    cout << sum << endl;
}