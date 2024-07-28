#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    if (a.find(b) != string::npos)
    {
        cout << "go";
    }
    else
    {
        cout << "no";
    }
}