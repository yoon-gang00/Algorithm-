#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int ans = 0;  // 초기값을 0으로 설정합니다.

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    for (int i = 0; i < n; i++) {
        ans = max(ans, a[i] * (n - i));
    }

    cout << ans;
}