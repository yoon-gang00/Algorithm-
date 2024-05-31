#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int p;
        cin >> p;
        map<int, string> m;
        for(int j=0;j<p;j++){
            int c; 
            string name;
            cin >> c >> name;
            m.insert(make_pair(c,name));
        }
        auto x = m.rbegin();
        cout << x->second << endl;
    }
}