#include <iostream>
#include <map>
#include <string>
#include <iomanip>
using namespace std;
int main() {
	string sub;
	string grade;
	double score;
	double sum=0;
	double result = 0;
	map<string, double> m;
	m.insert({ "A+",4.5 });
	m.insert({ "A0",4.0 });
	m.insert({ "B+",3.5 });
	m.insert({ "B0",3.0 });
	m.insert({ "C+",2.5 });
	m.insert({ "C0",2.0 });
	m.insert({ "D+",1.5 });
	m.insert({ "D0",1.0 });
	m.insert({ "F",0.0 });

	for (int i = 0; i < 20; i++) {
		cin >> sub >> score >> grade;
		if (grade == "P")
			continue;
		result += score * m[grade];
		sum += score;
	}
	result = result / sum;
	cout << fixed << setprecision(6);
	cout << result;

}