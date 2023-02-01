#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
vector<int> v;
int main() {
	int num, tmp, range, mid = 0, most_val, mean = 0;
	int most = -9999;
	int n[8001] = { 0, };
	bool not_first = false;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> tmp;
		v.push_back(tmp);
		mean += tmp;
		n[tmp + 4000]++;
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < 8001; i++)
	{
		if (n[i] == 0)
			continue;
		if (n[i] == most)
		{
			if (not_first)
			{
				most_val = i - 4000;
				not_first = false;
			}
		}
		if (n[i] > most) {
			most = n[i];
			most_val = i - 4000;
			not_first = true;
		}
	}
	mid = v[v.size() / 2];
	mean = round((float)mean / num);
	range = v.back() - v.front();
	cout << mean << '\n' << mid << '\n' << most_val << '\n' << range;

}
