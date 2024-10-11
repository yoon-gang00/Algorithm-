#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
#include <iostream>

using namespace std;

// 시간 문자열을 초 단위로 변환하는 함수
int timeToSeconds(const string& time) {
    int minutes, seconds;
    char colon;
    istringstream iss(time);
    iss >> minutes >> colon >> seconds;
    return minutes * 60 + seconds;
}

// 초 단위를 "mm:ss" 형식의 문자열로 변환하는 함수
string secondsToTime(int totalSeconds) {
    int minutes = totalSeconds / 60;
    int seconds = totalSeconds % 60;
    ostringstream oss;
    oss << setw(2) << setfill('0') << minutes << ":"
        << setw(2) << setfill('0') << seconds;
    return oss.str();
}

// 현재 위치가 오프닝 구간에 있을 경우 자동으로 op_end로 이동
string skipOpeningIfNeeded(const string& pos, int op_start_seconds, int op_end_seconds) {
    int current_seconds = timeToSeconds(pos);
    if (current_seconds >= op_start_seconds && current_seconds <= op_end_seconds) {
        return secondsToTime(op_end_seconds);
    }
    return pos;
}

// 시간에 초를 더하거나 빼는 함수
string addSeconds(const string& pos, int x, int video_len_seconds) {
    int current_seconds = timeToSeconds(pos);

    // x를 더한 후의 시간 계산
    int new_seconds = current_seconds + x;

    // 0초 미만이면 "00:00" 반환
    if (new_seconds < 0) {
        return "00:00";
    }

    // 동영상 길이를 초과하면 마지막 위치 반환
    if (new_seconds > video_len_seconds) {
        return secondsToTime(video_len_seconds);
    }

    // 결과 시간을 반환
    return secondsToTime(new_seconds);
}

// 명령을 처리하는 함수
string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    int video_len_seconds = timeToSeconds(video_len);
    int op_start_seconds = timeToSeconds(op_start);
    int op_end_seconds = timeToSeconds(op_end);

    string answer = pos; // 초기 위치를 pos로 설정
    for (int i = 0; i < commands.size(); i++) {
        // 매번 명령어 처리 전에 오프닝 구간을 체크하여 자동 이동
        answer = skipOpeningIfNeeded(answer, op_start_seconds, op_end_seconds);

        // 명령어에 따라 시간을 조정
        if (commands[i] == "next") {
            answer = addSeconds(answer, 10, video_len_seconds);
        } else if (commands[i] == "prev") {
            answer = addSeconds(answer, -10, video_len_seconds);
        }
    }

    // 마지막으로 오프닝 구간을 체크하여 자동 이동
    answer = skipOpeningIfNeeded(answer, op_start_seconds, op_end_seconds);

    return answer;
}
