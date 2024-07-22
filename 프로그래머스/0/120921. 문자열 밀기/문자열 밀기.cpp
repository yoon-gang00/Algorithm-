#include <string>
#include <vector>

using namespace std;

string chk(string A) {
    char fir = A[A.size() - 1];
    for (int i = A.size() - 1; i > 0; i--) {
        A[i] = A[i - 1];
    }
    A[0] = fir;
    return A;
}

int solution(string A, string B) {
    if (A == B) return 0;  // 이미 같으면 0 반환

    int answer = 0;
    for (int i = 0; i < A.size(); i++) {
        A = chk(A);
        answer++;
        if (A == B) {
            return answer;
        }
    }
    
    return -1;  // 절대 같아지지 않으면 -1 반환
}
