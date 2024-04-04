
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=1;i<n+1;i++){
        int x;
        cin >> x;
        v.insert(v.begin()+x,i); // 0번째에 1 ,1번째에 2, 
        
    }
    for(int i=n-1;i>=0;i--){
        cout << v[i] << " ";
    }
}