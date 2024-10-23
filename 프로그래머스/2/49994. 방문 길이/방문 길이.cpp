#include <string>
#include <vector>
#include <set>
#include <utility>
using namespace std;

struct path{
    pair<int,int> from;
    pair<int,int> to;
    bool operator<(const path& other) const{
        if(from == other.from){
            return to < other.to;
        }
        return from < other.from;
    }
};
int solution(string dirs) {
    int answer = 0;
    set<path> visit;
    int x =0, y = 0;
    for(int i =0;i<dirs.size();i++){
        int pX = x, pY = y;
        if (dirs[i] == 'L' && x > -5) x--;
        else if (dirs[i] == 'R' && x < 5) x++;
        else if (dirs[i] == 'U' && y < 5) y++;
        else if (dirs[i] == 'D' && y > -5) y--;
        else continue;
        
        path a = {{pX,pY},{x,y}};
        path b = {{x,y},{pX,pY}};
        
        visit.insert(a);
        visit.insert(b);
    }
    return visit.size()/2;
}