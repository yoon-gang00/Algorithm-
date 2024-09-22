#include <iostream>
#include <deque>
#include <cstdio> // C 스타일 입출력 사용
using namespace std;

int main() {
    int n;
    scanf("%d", &n); // cin 대신 scanf 사용
    deque<int> dq;
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        if (a == 1) {
            int x;
            scanf("%d", &x);
            dq.push_front(x);
        } else if (a == 2) {
            int x;
            scanf("%d", &x);
            dq.push_back(x);
        } else if (a == 3) {
            if (!dq.empty()) {
                printf("%d\n", dq.front());
                dq.pop_front();
            } else {
                printf("-1\n");
            }
        } else if (a == 4) {
            if (!dq.empty()) {
                printf("%d\n", dq.back());
                dq.pop_back();
            } else {
                printf("-1\n");
            }
        } else if (a == 5) {
            printf("%d\n", (int)dq.size());
        } else if (a == 6) {
            printf("%d\n", dq.empty() ? 1 : 0);
        } else if (a == 7) {
            if (!dq.empty()) {
                printf("%d\n", dq.front());
            } else {
                printf("-1\n");
            }
        } else if (a == 8) {
            if (!dq.empty()) {
                printf("%d\n", dq.back());
            } else {
                printf("-1\n");
            }
        }
    }
    return 0;
}
