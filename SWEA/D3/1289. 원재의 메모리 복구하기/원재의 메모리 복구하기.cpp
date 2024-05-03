#include <iostream>
#include <string>
using namespace std;
int main() {
    int test_case;
    int T;
    cin >> T;
	for(test_case = 1; test_case <= T; ++test_case)
	{   
	    string s;
	    cin >> s;
	    int ans=0;
	    for(int i=0;i<s.length()-1;i++){
	        if(s[i]!=s[i+1]){
	            ans++;
	        }
	    }
        if(s[0]=='1'){
            ans++;
        }
        
        cout << "#" << test_case << " " << ans<<"\n";
	}
	
    return 0;
}