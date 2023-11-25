#include <iostream>
#include <map>
using namespace std;
int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(0);
    map<string, string> map;
    int n,m;
    cin >> n >> m;
    string a,b;
    while(n--)
    {
         cin >> a >> b;  
         map.insert(make_pair(a,b));
    }
    while(m--){
        cin >> a;
        cout << map[a] << "\n";
    }
}