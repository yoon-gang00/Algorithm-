#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct ppl{
    string name;
    int day, month, year;
    int age;
};
bool compare(const ppl&a, const ppl&b){
    if(a.age == b.age){
        if(a.month == b.month){
            return a.day < b.day;
        }
        return a.month < b.month;
    }
    return a.age > b.age;
}
int main(){
	int n;
	cin >> n;
	vector<ppl> p;
	for(int i=0;i<n;i++){
	    ppl person;
	    cin >> person.name >> person.day >> person.month >> person.year;
	    person.age = 2023 - person.year;
	    p.push_back(person);
	}
	sort(p.begin(),p.end(),compare);
	cout << p[n-1].name << "\n" << p[0].name;
	
}