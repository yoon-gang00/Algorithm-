#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v; // 크기를 n으로 고정하지 않고 빈 벡터 생성
    for(int i = 1; i <= n; i++){
        v.push_back(i); // 값을 추가
    }

    string result;
    do {
        for(auto i = v.begin(); i != v.end(); ++i){
            result += to_string(*i) + " "; // 출력 내용을 문자열로 모음
        }
        result += '\n';
    } while(next_permutation(v.begin(), v.end()));
    
    cout << result; // 최종적으로 한 번에 출력
    return 0;
}
