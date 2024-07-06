#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    string answer = "";
    for(int i=0;i<numbers.length();i++){
        if(numbers[i]=='z'){
            answer +='0';
            i+=3;
        }
        else if(numbers[i]=='o'){
            answer += '1';
            i+=2;
        }
        else if(numbers[i]=='t'&&numbers[i+1]=='w'){
            answer += '2';
            i+=2;
        }
        else if(numbers[i]=='t'&&numbers[i+1]=='h'){
            answer += '3';
            i+=4;
        }
        else if(numbers[i]=='f'&&numbers[i+1]=='o'){
            answer += '4';
            i+=3;
        }
        else if(numbers[i]=='f'&&numbers[i+1]=='i'){
            answer += '5';
            i+=3;
        }
        else if(numbers[i]=='s'&&numbers[i+1]=='i'){
            answer += '6';
            i+=2;
        }
        else if(numbers[i]=='s'&&numbers[i+1]=='e'){
            answer += '7';
            i+=4;
        }
        else if(numbers[i]=='e'){
            answer += '8';
            i+=4;
        }
        else if(numbers[i]=='n'){
            answer += '9';
            i+=3;
        }
    }
    long long x = stoll(answer);
    return x;
}