
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> w(10);
    vector<int> k(10);
    for(int i=0;i<10;i++){
        cin >> w[i];
    }
    for(int i=0;i<10;i++){
        cin >> k[i];
    }
    sort(w.begin(),w.end(),greater<int>());
    sort(k.begin(),k.end(),greater<int>());
    int ws = w[0]+w[1]+w[2];
    int ks = k[0]+k[1]+k[2];
    cout << ws << " " <<ks;
}