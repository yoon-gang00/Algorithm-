// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int b,c,d;
    cin >> b >> c >> d;
    int n = min(min(b,c),d);
    vector<int> v1(b);
    vector<int> v2(c);
    vector<int> v3(d);
    int ans1=0;
    int ans2=0;
    for(int i=0;i<b;i++){
        cin >> v1[i];
        ans1+=v1[i];
    }
    for(int i=0;i<c;i++){
        cin >> v2[i];
        ans1+=v2[i];
    }
    for(int i=0;i<d;i++){
        cin >> v3[i];
        ans1+=v3[i];
    }
    sort(v1.begin(),v1.end(),greater<int>());
    sort(v2.begin(),v2.end(),greater<int>());
    sort(v3.begin(),v3.end(),greater<int>());
    for(int i=0;i<n;i++){
        ans2 += v1[i]*0.9;
        ans2 += v2[i]*0.9;
        ans2 += v3[i]*0.9;
    }
    for(int i=n;i<b;i++){
        ans2 += v1[i];
    }
    for(int i=n;i<c;i++){
        ans2 += v2[i];
    }
    for(int i=n;i<d;i++){
        ans2 += v3[i];
    }
    cout << ans1 << "\n" << ans2;
}