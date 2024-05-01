
#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
		int num;
        cin >> num;
        int ans;
        int arr[101]={0, };
        for(int i=0;i<1000;i++){
        	int score;
            cin >> score;
            arr[score]++;
        }
        ans = 0;
        for(int i=1;i<101;i++){
            if(arr[i]>=arr[ans])
                ans = i;
        }
        cout << "#" << num << " " << ans<<"\n";

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}