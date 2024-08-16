#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int max_log = log2(n) + 1;
    vector<vector<int>> min_table(n, vector<int>(max_log));
    vector<vector<int>> max_table(n, vector<int>(max_log));
    
    for (int i = 0; i < n; i++) {
        min_table[i][0] = v[i];
        max_table[i][0] = v[i];
    }
    
    for (int j = 1; j < max_log; j++) {
        for (int i = 0; i + (1 << j) <= n; i++) {
            min_table[i][j] = min(min_table[i][j-1], min_table[i + (1 << (j-1))][j-1]);
            max_table[i][j] = max(max_table[i][j-1], max_table[i + (1 << (j-1))][j-1]);
        }
    }
    
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        a--; b--;
        
        int length = b - a + 1;
        int j = log2(length);
        
        int min_val = min(min_table[a][j], min_table[b - (1 << j) + 1][j]);
        int max_val = max(max_table[a][j], max_table[b - (1 << j) + 1][j]);
        
        cout << min_val << " " << max_val << "\n";
    }
    
    return 0;
}
