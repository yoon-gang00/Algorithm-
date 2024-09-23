#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[1001] = {0}; // 배열을 0으로 초기화
    stack<int> st;
    int last = 0, first = 1001, answer = 0, max = 0;

    for (int i = 0; i < n; i++) {
        int l, h;
        cin >> l >> h;
        arr[l] = h;
        if (last < l) {
            last = l;
        }
        if (first > l) {
            first = l;
        }
        if (h > arr[max]) {
            max = l;
        }
    }

    // 왼쪽에서 최대 높이 기둥까지 면적 계산
    for (int i = first; i <= max; i++) {
        if (arr[i]) {
            if (st.empty())
                st.push(arr[i]);
            else if (arr[i] > st.top())
                st.push(arr[i]);
        }
        answer += st.top();
    }

    // 스택 비우기
    while (!st.empty()) st.pop();

    // 오른쪽에서 최대 높이 기둥까지 면적 계산
    for (int i = last; i > max; i--) {
        if (arr[i]) {
            if (st.empty())
                st.push(arr[i]);
            else if (arr[i] > st.top())
                st.push(arr[i]);
        }
        answer += st.top();
    }

    cout << answer;
}
