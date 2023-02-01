#include <cstdio>
#include <vector>
using namespace std;
int n;
vector<long long> ans = { 0,1,2 };
void find() {
	long long tmp;
	for (int i = 3; i <= n; i++) {
		tmp = 0;
		tmp = ans[i - 1] + ans[i - 2];
		ans.push_back(tmp % 15746);
	}
}
int main() {
	scanf("%d", &n);
	find();
	printf("%lld", ans[n] % 15746);
}