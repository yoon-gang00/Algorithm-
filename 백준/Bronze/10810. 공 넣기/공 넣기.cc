#include <iostream>
using namespace std;
int main() {
    int n, m;
    int arr[101] = {};
    cin >> n >> m;
    while(m--) {
        int i, j, k;
        cin >> i >> j >> k;
        for (int t = i; t <= j; t++) {
            arr[t] = k;
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << ' ';
    }
}