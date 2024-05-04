#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{

	    int n,m;
	    cin >> n >> m;
	    vector<vector<int>> v(n, vector<int>(n));
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cin >> v[i][j];
	        }
	    }
    int t=(n-m+1);
    int ans=0;
    int max_ans=0;
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            for(int x=0;x<m;x++){
                for(int y=0;y<m;y++){
                    ans+=v[i+x][j+y];
                }
            }
            if(ans>max_ans){
            	max_ans = ans;
            }
            ans=0;
        }
        
    }
    cout << "#" << test_case << " " << max_ans<<"\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}