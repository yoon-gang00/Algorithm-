#include <iostream>
using namespace std;
int main() {
    int n, p,x;
    cin >> n >> p;
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        cout << x - n*p << ' ';
    }
}