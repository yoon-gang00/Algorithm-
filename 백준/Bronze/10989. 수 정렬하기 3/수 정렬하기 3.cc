#include <cstdio>
#include <vector>
using namespace std;

int main() {
	int n,x;
	int cnt[10001] = { 0, };
	scanf("%d", &n);
	
	for (int i = 0; i <n; i++) {
		scanf("%d", &x);
		cnt[x]++;
	}

	for (int i = 0; i < 10001; i++) {
		for (int j = 0; j < cnt[i]; j++)
			printf("%d\n", i);
	}
}