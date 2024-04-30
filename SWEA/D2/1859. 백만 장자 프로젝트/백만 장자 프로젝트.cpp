#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int T;
    cin >> T;
    for(int test_case = 1; test_case <= T; ++test_case)
	{
	    int n;
        cin >> n ;
        long long ans =0;
        int tmp,pre=0;
        vector<int> v(n);
        for(int i=0;i<n;i++){
             cin >> v[i];
        }
        int max_i = v[n-1];
        for(int i=n-2;i>=0;i--){
        	if(max_i<v[i]){
                max_i = v[i];
            }
            else{
            	ans += max_i-v[i];
            }
        }
        cout << "#" << test_case << " " << ans<<"\n";
	}
	
	return 0;
}
//max_element 함수가 시간복잡도를 많이 먹어서 시간초과생김