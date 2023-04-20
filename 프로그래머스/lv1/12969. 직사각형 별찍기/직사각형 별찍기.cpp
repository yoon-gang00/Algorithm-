#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    for(int i=0;i<b;i++){
        for(int i=0;i<a;i++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}