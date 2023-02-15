#include <iostream>
#include <queue>
using namespace std;
int n;
priority_queue<int> pQ;
int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	while(n--) {
		int x;
		cin >> x;
		if (x == 0) {
			if (!pQ.empty())
			{
				cout <<pQ.top()<<"\n";
				pQ.pop();
			}
			else {
				cout << 0<<"\n";
			}
		}
		else {
			pQ.push(x);
		}
	}
	return 0;
}