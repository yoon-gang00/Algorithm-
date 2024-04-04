// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        int maxInt = 0;
        string maxString;
        for(int j=0;j<n;j++){
            string s;
            int x;
            cin >> s>>x;
            if(x>maxInt){
                maxInt = x;
                maxString = s;
            }
        }
        cout << maxString << "\n";
        
    }
    
}