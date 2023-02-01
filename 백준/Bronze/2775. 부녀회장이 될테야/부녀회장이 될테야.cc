#include <iostream>

using namespace std;
int main() {
    int array[15][14];
    int sum = 0;
    for (int i = 0; i < 14; i++) {
        array[0][i] = i + 1;
    }
    for (int i = 0; i < 14; i++) {
        for (int j = 0; j < 14; j++) {
            sum += array[i][j];
            array[i + 1][j] = sum;
        }
        sum = 0;
    }
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int k, n;
        cin >> k >> n;
        cout << array[k][n-1]<<"\n";
    }
    

}