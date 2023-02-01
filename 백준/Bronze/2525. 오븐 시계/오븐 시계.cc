using namespace std;
#include <iostream>
int main() {
    int h, m;
    cin >> h >> m;
    int c;
    cin >> c;
    h += c / 60;
    m += c % 60;
    if (m >= 60)
    {
        h++;
        m -= 60;
    }
    if (h >= 24)
        h -= 24;
    
    cout << h << " " << m;
    
}