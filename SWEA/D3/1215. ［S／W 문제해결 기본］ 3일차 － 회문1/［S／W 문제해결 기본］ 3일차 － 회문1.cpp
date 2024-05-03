#include<iostream>
#include<vector>
using namespace std;

bool isPalindrome(const vector<char>& str) {
    int left = 0;
    int right = str.size() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main(int argc, char** argv) {
    int test_case;
    for(test_case = 1; test_case <= 10; ++test_case) {
        int ans = 0;
        vector<vector<char>> v(8, vector<char>(8));
        int n;
        cin >> n;
        for(int i = 0; i < 8; i++) {
            for(int j = 0; j < 8; j++) {
                cin >> v[i][j];
            }
        }
        
        // 가로 회문 확인
        for(int i = 0; i < 8; i++) {
            for(int j = 0; j <= 8 - n; j++) {
                if (isPalindrome(vector<char>(v[i].begin() + j, v[i].begin() + j + n))) {
                    ans++;
                }
            }
        }
        
        // 세로 회문 확인
        for(int i = 0; i < 8; i++) {
            for(int j = 0; j <= 8 - n; j++) {
                vector<char> col;
                for(int k = 0; k < n; k++) {
                    col.push_back(v[j + k][i]);
                }
                if (isPalindrome(col)) {
                    ans++;
                }
            }
        }
        
        cout << "#" << test_case << " " << ans << "\n";
    }
    return 0;
}
