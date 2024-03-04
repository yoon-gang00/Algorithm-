#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int solution(vector<int> scoville, int K){
	int answer = 0;
	priority_queue<int,vector<int>,greater<int>> pq;
	for(int i : scoville){
		pq.push(i);
	}
	while(!pq.empty()){
		int a = pq.top();
		if(a>=K){
			return answer;
		}
		answer++;
		pq.pop();
		if(pq.empty()){
			return -1;
		}
		int b = pq.top();
		pq.pop();
		a = a + b*2;
		pq.push(a);
	}
	return answer;
}