using namespace std;
#include <iostream>
int main() {
    int a, b, c,p;
    cin >> a >> b >> c;
    if (a == b && b == c)
        p = 10000 + a * 1000;
    else if (a == b)
        p = 1000 + a * 100;
    else if (b == c)
        p = 1000 + b * 100;
    else if (c == a)
        p = 1000 + a * 100;
    else
        if (a > b)
            if (c > a)
                p = c * 100;
            else
                p = a * 100;
        else
            if (b > c)
                p = b * 100;
            else
                p = c * 100;
    cout << p;
    
}