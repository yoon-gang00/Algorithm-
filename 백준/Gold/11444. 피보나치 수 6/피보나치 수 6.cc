#include <iostream>
#include <map>
using namespace std;
map<long long, long long> m;
long long fibo(long long n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	if (n == 2)
		return 1;
	if (m.count(n) > 0) 
		return m[n];
	if (n % 2 == 0) { //n이짝수라면
		long long x = n / 2;
		long long tmp1 = fibo(x - 1);
		long long tmp2 = fibo(x);
		m[n] = ((2LL * tmp1 + tmp2) * tmp2) % 1000000007LL;
		return m[n];
	}
	long long x = (n + 1) / 2; //n이 홀수인 경우
	long long tmp1 = fibo(x - 1);
	long long tmp2 = fibo(x);
	m[n] = (tmp1*tmp1+tmp2*tmp2)% 1000000007LL;
	return m[n];

}
int main() {
	long long n;
	cin >> n;
	cout << fibo(n);
}