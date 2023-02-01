#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> s[26];
char str[2001];
int n,l,r;
char a;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
    cin >> str;
    for(int i=0;str[i]!=0;i++)
        s[str[i]-'a'].push_back(i);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a>>l>>r;
        int alp = a-'a';
        auto it1 =lower_bound(s[alp].begin(),s[alp].end(),l);
        auto it2 = upper_bound(s[alp].begin(),s[alp].end(),r);
        cout << it2 - it1 << '\n';    }
    return 0;
}