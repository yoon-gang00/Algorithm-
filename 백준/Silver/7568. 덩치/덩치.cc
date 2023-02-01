#include <iostream>
#include <utility>
using namespace std;

int main() {
	int n;
	int rank = 1;
	pair<int, int> arr[50];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i].first >> arr[i].second;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			if (arr[i].first < arr[j].first && arr[i].second < arr[j].second)
				rank++;
		cout << rank << ' ';
		rank = 1;
	}
}