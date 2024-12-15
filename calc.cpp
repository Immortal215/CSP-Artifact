#include <bits/stdc++.h>
using namespace std;

int calculate(int num1, char operat, int num2) {
    if (operat == '+') return num1 + num2;
    if (operat == '-') return num1 - num2;
    if (operat == '*') return num1 * num2;
    if (operat == '/') return num2 != 0 ? num1 / num2 : 0; 
}

int main() {
    vector<char> operats = {'+', '-', '*', '/'};
    vector<int> nums; 
    vector<char> usingOperats; 
    vector<int> steps;

    string line;
    cout << "Enter a simple expression (e.g., 3+4*2): " << endl;
    getline(cin, line);  
    
    for (char value : line) {
        if (isdigit(value)) {
            nums.push_back(value - '0');
        } else {
            if (find(operats.begin(), operats.end(), value) != operats.end()) {
                usingOperats.push_back(value); 
            }
        }
    }

    int result = nums[0];
    steps.push_back(nums[0]);
    
    for (int i = 0; i < usingOperats.size(); i++) {
        result = calculate(result, usingOperats[i], nums[i + 1]);
        steps.push_back(result);
    }
    
    cout << endl << "Steps :" << endl; 
    for(int i = 0; i < usingOperats.size(); i++) {
        cout << "(" << i + 1 << ") " << steps[i] << " " << usingOperats[i] << " " << nums[i + 1] << " = " << steps[i + 1] << endl; 
    }
    cout << endl << "Result: " << result << endl;

}
