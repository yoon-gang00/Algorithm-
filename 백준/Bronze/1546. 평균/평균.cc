using namespace std;
#include <iostream>
#include <vector>
int main() {
	int n;
	cin >> n;
	vector<int> v;
	vector <int > a;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	int max = 0;
	for (int i = 0; i <n; i++) {
		if (v[i] > max)
			max = v[i];
	}
	double score=0;
	for (int i = 0; i < n; i++) {
			score += (double)v[i] / max * 100;
	}
	score = score / n;
	cout << fixed;
	cout.precision(2);
	cout << score;
}