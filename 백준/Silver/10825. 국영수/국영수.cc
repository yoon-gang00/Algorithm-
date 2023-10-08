#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct student{
    string name;
    int korean;
    int english;
    int math;
};
bool cmp(const student &sa, const student &sb){
    if(sa.korean == sb.korean){
        if(sa.english == sb.english){
            if(sa.math == sb.math){
                return sa.name < sb.name;
            }
            return sa.math > sb.math;
        }
        return sa.english < sb.english;
    }
    return sa.korean > sb.korean;
}
int main(){
    int n;
    cin >> n;
    vector<student> v;
    for(int i=0;i<n;i++){
        student a;
        cin >> a.name >> a.korean >> a.english >> a.math;
        v.push_back(a);
    }
    sort(v.begin(),v.end(),cmp);
    for(auto i : v){
        cout << i.name << '\n';
    }
}