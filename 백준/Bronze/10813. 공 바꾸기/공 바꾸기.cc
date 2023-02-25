#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin >> n >> m;
    int arr[101] = {};
    for (int i = 1; i <= n; i++) {
        arr[i] = i;
    }
    while (m--) {
        int i, j,x;
        cin >> i >> j;
        x = arr[i];
        arr[i] = arr[j];
        arr[j] = x;
    }
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }

}