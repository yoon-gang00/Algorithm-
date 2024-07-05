#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

string solution(string my_string) {
    string answer = my_string;
        transform(answer.begin(), answer.end(), answer.begin(), [](unsigned char c) -> unsigned char {
        if (isupper(c))
            return tolower(c);
        else if (islower(c))
            return toupper(c);
        else
            return c;
    });

    return answer;
}