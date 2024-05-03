#include <iostream>
using namespace std;
int main() {
    int test_case;
    
	for(test_case = 1; test_case <= 10; ++test_case)
	{   
	    int t;
	    cin >> t;
	    int a,b;
	    cin >> a >> b;
	    long long ans=1;
	    for(int i=0;i<b;i++){
	        ans *= a;
	    }
        cout << "#" << test_case << " " << ans<<"\n";
	}
	
    return 0;
}