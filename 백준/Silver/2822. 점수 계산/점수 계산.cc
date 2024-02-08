#include <iostream>
#include <algorithm>
using namespace std;
class x{
    public :
            int score;
            int num;
};
bool cmp(x a, x b){
    return a.score > b.score;
}
int main(){
    x* pr= new x[8];
    int sum = 0;
    int arr[8];
    for(int i=0;i<8;i++){
        cin >> pr[i].score;
        pr[i].num = i+1;
    }
    stable_sort(pr,pr+8,cmp);
    for(int i=0;i<5;i++){
        sum += pr[i].score;
        arr[i] = pr[i].num;
    }
    sort(arr,arr+5);
    cout << sum << "\n";
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
    return 0;
}