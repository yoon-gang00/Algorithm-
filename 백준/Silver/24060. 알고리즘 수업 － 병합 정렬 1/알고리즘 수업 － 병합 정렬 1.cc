#include <iostream>
using namespace std;

void merge_sort(int* a, int start, int end, int k);
void merge(int* a, int p, int q, int r, int k);
int inputcnt = 0;
int main() {
	int n, k;
	cin >> n >> k;
	int* a;
	a = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	merge_sort(a, 0, n - 1, k);
	if (inputcnt < k) cout << -1;
	return 0;
}
void merge_sort(int* a, int start, int end, int k) {
	int p = start, r = end;
	int q;
	if (p < r) {
		q = (p + r) / 2;
		merge_sort(a, p, q, k);
		merge_sort(a, q + 1, r, k);
		merge(a, p, q, r, k);
	}
}
void merge(int* a, int p, int q, int r, int k) {
	int tmp[r + 2];
	int i = p, j = q + 1, t = 1;
	while (i <= q && j <= r) {
		if (a[i] <= a[j])
			tmp[t++] = a[i++];
		else
			tmp[t++] = a[j++];
	}
	while (i <= q)
		tmp[t++] = a[i++];
	while (j <= r)
		tmp[t++] = a[j++];
	i = p;
	t = 1;
	while (i <= r) {
		a[i++] = tmp[t++];
		if (++inputcnt == k) cout << tmp[t - 1];
	}

}