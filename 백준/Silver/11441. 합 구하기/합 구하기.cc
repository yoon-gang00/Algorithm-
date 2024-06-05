#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n+1,0);
    

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        v[i] += v[i-1];
    }

    int m;
    cin >> m;
    while(m--) {
        int x, y;
        cin >> x >> y;
        cout << v[y] - v[x-1] << "\n";
    }

    return 0;
}
