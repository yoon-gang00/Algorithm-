#include <iostream>
#include <vector>
using namespace std;
int n, m;
int arr[101];
int x, y, k;
void change(int begin, int mid, int end) {
	vector<int> tmp;
	int order = 0;
	for (int i = mid; i <= end; i++) tmp.push_back(arr[i]);
	for (int i = begin; i < mid; i++) tmp.push_back(arr[i]);
	for (int i = begin; i <= end; i++) arr[i] = tmp[order++];
}
int main(){
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		arr[i] = i;
	}
	while (m--) {
		cin >> x >> y >> k;
		change(x, k, y);
	}
	for (int i = 1; i <= n; i++)
		cout << arr[i] << ' ';
}