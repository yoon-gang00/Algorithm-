#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	vector<string> croatian = { "c=","c-","dz=","d-","lj","nj","s=","z="};
	int a;
	string s;
	cin >> s;
	for (int i = 0; i < croatian.size(); i++) {
		while (1) {
			a = s.find(croatian[i]);
			if (a == string::npos)
				break;
			s.replace(a, croatian[i].length(), "#");
		}
	}
	cout << s.length();

}