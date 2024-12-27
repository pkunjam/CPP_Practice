#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    
    stringstream ss(str);
    
    int val;
    char comma;
        
    vector<int> res;
   
    while (ss >> val)
    {
        res.push_back(val);
        
        if (!(ss >> comma)) break;
    } 
    
    return res;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}