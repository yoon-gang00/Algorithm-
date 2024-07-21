#include <string>
#include <vector>

using namespace std;

int solution(string before, string after) {
    int answer = 1;
    int arr_b[26]={0,};
    int arr_a[26]={0,};
    for(int i=0;i<before.size();i++){
        arr_b[before[i]-'a']++;
        arr_a[after[i]-'a']++;
    }
      for (int i = 0; i < 26; i++) {
        if (arr_b[i] != arr_a[i]) {
            answer = 0;
            break;
        }
    }
    return answer;
}