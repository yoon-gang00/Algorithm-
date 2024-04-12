#include <iostream>
using namespace std;
int main() {
    int p;
    int stud[20];
    cin >> p;
    for(int i=0;i<p;i++){
        int t;
        cin >> t;
        int cnt =0;
        for(int i=0;i<20;i++)
            cin >> stud[i];
        for(int i=0;i<20;i++){
            for(int j=i;j<20;j++){
                if(stud[i]>stud[j])
                    cnt+=1;
            }
        }
        cout << i+1 << " " << cnt<<"\n";
    }
}