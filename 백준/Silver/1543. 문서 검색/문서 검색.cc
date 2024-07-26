#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false); // 입출력 속도 향상
    cin.tie(NULL);

    string doc;
    string s;
    int ans = 0;
    getline(cin, doc);
    getline(cin, s);

    size_t pos = 0;
    while ((pos = doc.find(s, pos)) != string::npos) {
        ans++;
        pos += s.length();
    }

    cout << ans << endl;
    return 0;
}
