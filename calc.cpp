#include <bits/stdc++.h>
using namespace std;

int calculate(int num1, string operat, int num2) {
    
}


int main()
{
    vector<int> nums; 
    vector<char> operats;
    
    string line;
    cin >> line; 
    
    for (char value : line) {
        
        if (isdigit(value) == true) {
            
            nums.push_back(value);
            
        } else {
            
            operats.push_back(value);
        }
        
    }
    
    cout << nums[0] << operats[0];
}
