#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string num;
    while (true) {
        cin >> num;
        if (num == "0") {
            break;
        }
        
        string reversedNum = num;
        reverse(reversedNum.begin(), reversedNum.end());
        
        if (num == reversedNum) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    
    return 0;
}