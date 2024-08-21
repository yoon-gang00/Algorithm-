#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int n;
    cin >> n;
    vector<int> ga;
    vector<int> se;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if(a == 0) {
            // 가로
            se.push_back(b);
        }
        else {
            // 세로
            ga.push_back(b);
        }
    }
    // 벡터 정렬
    sort(se.begin(), se.end());
    sort(ga.begin(), ga.end());

    // 잘린 가로 및 세로 크기를 계산
    vector<int> s;
    vector<int> g;
    
    // 가로 (세로로 자를 때)
    if (!se.empty()) {
        for(int i = 0; i < se.size(); i++) {
            if(i == 0) {
                s.push_back(se[0]);  // 첫 조각
            } else {
                s.push_back(se[i] - se[i - 1]);  // 중간 조각
            }
        }
        s.push_back(y - se[se.size() - 1]);  // 마지막 조각
    } else {
        s.push_back(y);  // 점선이 없으면 전체가 하나의 조각
    }
    
    // 세로 (가로로 자를 때)
    if (!ga.empty()) {
        for(int i = 0; i < ga.size(); i++) {
            if(i == 0) {
                g.push_back(ga[0]);  // 첫 조각
            } else {
                g.push_back(ga[i] - ga[i - 1]);  // 중간 조각
            }
        }
        g.push_back(x - ga[ga.size() - 1]);  // 마지막 조각
    } else {
        g.push_back(x);  // 점선이 없으면 전체가 하나의 조각
    }

    // 가장 큰 가로/세로 조각 선택
    sort(s.begin(), s.end(), greater<int>());
    sort(g.begin(), g.end(), greater<int>());

    // 가장 큰 종이 조각의 넓이 출력
    cout << s[0] * g[0] << endl;

    return 0;
}
