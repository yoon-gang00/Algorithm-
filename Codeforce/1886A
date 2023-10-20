//https://codeforces.com/problemset/problem/1886/A
/*
A. Sum of Three
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Monocarp has an integer 𝑛.

He wants to represent his number as a sum of three distinct positive integers 𝑥, 𝑦, and 𝑧. 
Additionally, Monocarp wants none of the numbers 𝑥, 𝑦, and 𝑧 to be divisible by 3.

Your task is to help Monocarp to find any valid triplet of distinct positive integers 𝑥, 𝑦, and 𝑧, or report that such a triplet does not exist.

Input
The first line contains a single integer 𝑡 (1≤𝑡≤104) — the number of testcases.

The only line of each testcase contains a single integer 𝑛 (1≤𝑛≤109).

Output
For each testcase, if there is no valid triplet 𝑥, 𝑦, and 𝑧, print NO on the first line.

Otherwise, print YES on the first line. On the second line, print any valid triplet of distinct positive integers 𝑥, 𝑦, and 𝑧 such that 𝑥+𝑦+𝑧=𝑛, and none of the printed numbers are divisible by 3. 
If there are multiple valid triplets, you can print any of them.
*/
#include <iostream>
using namespace std;
int main(){
    long long int n;
    cin >> n;
    for(int i=0;i<n;i++){
        long long int x;
        cin >> x;
        if(x<7 || x==9){
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        if(x%3==0)
            cout << 1 << " " << 4 << " " << (x-5) << "\n";
        else
            cout << 1 << " " << 2 << " " << (x-3) << "\n";
    }
}
