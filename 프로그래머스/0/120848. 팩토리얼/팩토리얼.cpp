#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int x = 1;
    int z=1;
    while(1){
       x *= z;
        if(x>n){
            break;
            
        }
        
        z++;
        
    }
    z--;
    return z;
}