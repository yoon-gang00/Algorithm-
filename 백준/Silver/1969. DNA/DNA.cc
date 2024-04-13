// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n,m;
    int cnt=0;
    cin >> n >> m;
    vector<char> dna;
    vector<int> v(4,0);
    vector<string> st;
    string ans="";
    dna.push_back('A');
    dna.push_back('C');
    dna.push_back('G');
    dna.push_back('T'); //알파벳 순서로
    for(int i=0;i<n;i++){
        string s;
        cin >>s;
        st.push_back(s);
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(st[j][i]=='A')
                v[0]++;
            else if(st[j][i]=='C')
                v[1]++;
            else if(st[j][i]=='G')
                v[2]++;
            else if(st[j][i]=='T')
                v[3]++;
        }
        int max=0;
        int maxId=0;
        for(int k=0;k<4;k++){
            if(max<v[k]){
                max = v[k];
                maxId=k;
            }
            else if(max == v[k])
                continue;
        }
        ans += dna[maxId];
        v.assign(4,0);
    }
    cout << ans << "\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(ans[j]!=st[i][j])
                cnt++;
        }
    }
        cout << cnt;
}
