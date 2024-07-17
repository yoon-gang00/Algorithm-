#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;

    // 전체 lines 벡터에서 최솟값과 최댓값 구하기
    int min_val = 100;
    int max_val = -100;

    for (const auto& line : lines) {
        min_val = min(min_val, *min_element(line.begin(), line.end()));
        max_val = max(max_val, *max_element(line.begin(), line.end()));
    }

    vector<int> v(max_val - min_val + 1, 0);

    // 각 구간에 해당하는 값을 증가시키기
    for (int i = 0; i < lines.size(); i++) {
        for (int j = lines[i][0]; j < lines[i][1]; j++) {
            if (j - min_val >= 0 && j - min_val < v.size()) {
                v[j - min_val]++;
            }
        }
    }

    // 0이 아닌 값의 개수를 세기
    for (int i = 0; i < v.size(); i++) {
        if (v[i]  >=2) {
            answer++;
        }
    }

    return answer;
}
