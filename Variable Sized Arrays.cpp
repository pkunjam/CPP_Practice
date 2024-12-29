#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int n, q;
    
    cin >> n >> q;

    vector<vector<int>> outer(n);
    
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        
        outer[i].reserve(k);
        
        for (int j = 0; j < k; j++)
        {
            cin >> outer[i][j];
        }
    }
    
    for (int q = 0; q < outer.size(); q++)
    {
        int i, j;
        cin >> i >> j;
        
        cout << outer[i][j] << endl;        
    }
        
    return 0;
}