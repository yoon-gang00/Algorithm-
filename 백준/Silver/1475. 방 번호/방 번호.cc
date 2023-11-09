#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    int arr[10] = {0, };
    for (char c : s) {
        int digit = c - '0';
        arr[digit]++; 
    }
    arr[6]=ceil(static_cast<double>(arr[6] + arr[9]) / 2);
    int* maxElement = max_element(arr, arr + 9);
    cout << *maxElement<<"\n";
}