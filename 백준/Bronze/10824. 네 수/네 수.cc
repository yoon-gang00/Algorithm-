#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a, b, c, d;
    cin >> a >> b >> c >> d;
    string x = a + b;
    string y = c + d;
    long o = stol(x);
    long t = stol(y);
    cout << o + t;
}