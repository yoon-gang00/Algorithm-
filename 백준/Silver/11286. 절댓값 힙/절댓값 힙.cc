#include <iostream>
#include <queue>
using namespace std;
struct absol {
	bool operator()(int a, int b) {
		if (abs(a) == abs(b))
			return a > b;
		else
			return abs(a) > abs(b);
	}
};
int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	int n;
	priority_queue<int, vector<int>,absol> pQ;
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