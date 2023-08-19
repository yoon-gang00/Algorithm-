#include <iostream>
using namespace std;
bool prime(long long x){
    if(x <= 1)
        return 0;
    if(x==2||x==3)
        return 1;
    if(x%2==0||x%3==0)
        return 0;
    for(long long i =5;i*i<=x;i++){
        if(x%i==0||x%(i+2)==0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    long long n;
    cin >> n;
    long long a;
    for(int i=0;i<n;i++){
        cin >> a;
        while(!prime(a))
            a++;
        cout << a << endl;
    }
}
