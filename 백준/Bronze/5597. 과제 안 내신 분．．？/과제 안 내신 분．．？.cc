#include <iostream>
using namespace std;
int main() {
    int arr[31] = {};
    for (int i = 1; i <= 28; i++) {
        int x;
        cin >> x;
        arr[x] = 1;
    }
    for (int i = 1; i <= 30; i++) {
        if (arr[i] != 1)
            cout << i << "\n";
    }
}