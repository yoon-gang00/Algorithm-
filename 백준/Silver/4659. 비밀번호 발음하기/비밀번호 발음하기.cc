#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    while(1){
        bool flag = 0;
        bool chk = 1;
        int x,y,z;
        x=1;
        y=0;
        z=0;
        string s;
        cin >> s;
        if(s=="end"){
            break;
        }
        for(int i=0;i<(int)s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u'){
                flag = 1;
            }
            
            if(i>0){
                if(s[i]==s[i-1])
                    x++;
            
                else
                    x=1;
            
                if(x==2&&s[i]!='e'&&s[i]!='o'){
                    chk =0;
                    break;
                }    
            }
            if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u'){
                y++;
                z=0;
            }
            if(s[i]!='a'&&s[i]!='e'&&s[i]!='o'&&s[i]!='i'&&s[i]!='u'){
                z++;
                y=0;
            }
            if(y>=3){
                chk =0;
                break;
            }
            if(z>=3){
                chk=0;
                break;
            }
            
        }
        if(flag && chk){
                cout << "<" << s << "> is acceptable." << "\n";
            }
            else{
                cout << "<" << s << "> is not acceptable." << "\n";
            }
        
   
    }
 return 0;
}