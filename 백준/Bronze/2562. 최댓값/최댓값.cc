using namespace std;
#include <iostream>
#include <vector>
int main() {
	int array[9];
	for (int i = 0; i < 9; i++) {
		
		cin >> array[i];
		
	}
	int n=0;
	int max = 0;
	for (int i = 0; i < 9; i++) {
		if (max < array[i]) {
			max = array[i];
			n = i;
		}
		
	}

	cout << max << " " << n+1;
} 